/*
 * main.c
 *
 *  Created on: Jun 12, 2015
 *      Author: abubakr
 */


#include "spi.h"

void main (void){
	uint8 data;
	SPI_Init_Slave();
	SET_BIT(DDRA,0);
	while (1){
		data = SPI_RecieveByte();
		if(data==1){
		SET_BIT(PORTA,0);
	}
		else{
			CLEAR_BIT(PORTA,0);
		}
}
}
