/*
 * main.c
 *
 *  Created on: May 29, 2015
 *      Author: abubakr
 */

#include "lcd.h"

uint8 main (void){
	LCD_init();
	LCD_display_Character('a');
	uint8 str[20]="A13 Group";
	LCD_display_String(str);
	LCD_Display_String_Row_Col (1,5,"Embedded");
	while (1){

	}
	return (0);
}

