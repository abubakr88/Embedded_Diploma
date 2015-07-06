/*
 * uart.c
 *
 *  Created on: Jun 12, 2015
 *      Author: abubakr
 */

#include "uart.h"

void UART_init(void){

	/* Bit 1 – U2X: Double the USART Transmission Speed */
	UCSRA = (1<< U2X);

	/* Enable receiver and transmitter */

	UCSRB = (1<<RXEN)|(1<<TXEN);

	/* Set frame format: 8data, 1stop bit */

	UCSRC = (1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	UBRRL=12;
	UBRRH =0;
}

void UART_SendByte(uint8 data){
	while(BIT_IS_CLEAR(UCSRA,5));
	UDR = data;
}
uint8 UART_ReceiveByte(void){
	/* Wait for data to be received */
	while (BIT_IS_CLEAR(UCSRA,7));
	/* Get and return received data from buffer */
	return UDR;
}

void UART_sendString(const uint8 *Str)
{
	uint8 i = 0;
	while(Str[i] != '\0')
	{
		UART_sendByte(Str[i]);
		i++;
	}
}

void UART_receiveString(uint8 *Str)
{
	uint8 i = 0;
	Str[i] = UART_recieveByte();
	while(Str[i] != '#')
	{
		i++;
		Str[i] = UART_recieveByte();
	}
	Str[i] = '\0';
}
