/*
 * main.c
 *
 *  Created on: Jun 12, 2015
 *      Author: abubakr
 */


#include "uart.h"

void main (void){
	uint8 data;
	SPI_init();
	while (1){
		data = UART_ReceiveByte ();
		UART_SendByte(data);
	}
}
