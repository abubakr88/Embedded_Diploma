/*
 * main.c
 *
 *  Created on: Jun 12, 2015
 *      Author: abubakr
 */


#include "uart.h"

void main (void){
	uint8 data;
	UART_init();
	CLEAR_BIT(DDRA,0);
	while (1){
		data = UART_ReceiveByte ();
		if(data==1){
		SET_BIT(PORTA,0);
	}
}
}
