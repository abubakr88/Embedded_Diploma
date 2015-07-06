/*
 * main.c
 *
 *  Created on: Jun 12, 2015
 *      Author: abubakr
 */


#include "uart.h"

void main (void){
	uint8 data;
	char s = "I'm Micro 1";
	UART_init();
	while (1){
		data = UART_SEND_String(&s);
		UART_SendByte(data);
	}
}
