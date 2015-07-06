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
	SET_BIT(DDRA,0);
	while (1){
		if (BIT_IS_CLEAR(PINA,0)){
		data = 1;
		UART_SendByte(data);
	}
}
}
