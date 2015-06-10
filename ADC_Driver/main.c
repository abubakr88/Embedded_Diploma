/*
 * main.c
 *
 *  Created on: May 29, 2015
 *      Author: abubakr
 */

#include "lcd.h"
#include "ADC_Driver.h"

uint8 main (void){
	uint16 result=0, temp=0;
	LCD_init();
	ADC_init();
	LCD_Display_String_Row_Col(0,3,"Temp=");
	while (1){
		result = ADC_read(3);
		temp = (150*result*5)/(1.5*1023);
		LCD_go_To_ROW_Col(0 ,8);
		LCD_intger_TO_String(temp );

	}
	return (0);
}

