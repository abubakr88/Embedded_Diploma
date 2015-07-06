/*
 * main.c
 *
 *  Created on: Jun 12, 2015
 *      Author: abubakr
 */


#include "spi.h"

void main (void){
	uint8 data;
	SPI_Init_Master();
	CLEAR_BIT(DDRA,0);
	while (1){
		if (BIT_IS_SET(PINA,0)){
		data = 1;
		SPI_SendByte(data);
	}
		else{
			data = 0;
			SPI_SendByte(data);

		}
}
}
