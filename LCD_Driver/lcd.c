/*
 * lcd.c
 *
 *  Created on: May 29, 2015
 *      Author: abubakr
 */

#include "lcd.h"

void LCD_Send_Command(uint8 command){

	CLEAR_BIT(PORTD,4);
	CLEAR_BIT(PORTD,5);
	_delay_ms(1);
	SET_BIT(PORTD,6);
	_delay_ms(1);
	PORTC= command;
	_delay_ms(1);
	CLEAR_BIT(PORTD,6);
	_delay_ms(1);
}

void LCD_display_Character(uint8 data)
{
	SET_BIT(PORTD,4);
	CLEAR_BIT(PORTD,5);
	_delay_ms(1);
	SET_BIT(PORTD,6);
	_delay_ms(1);
	PORTC= data;
	_delay_ms(1);
	CLEAR_BIT(PORTD,6);
	_delay_ms(1);
}


void LCD_init(void)
{
	SET_BIT(DDRD,4);
	SET_BIT(DDRD,5);
	SET_BIT(DDRD,6);
	DDRC = 0xff;
	LCD_Send_Command(0x38);   // 8 bit and 2 lines
	LCD_Send_Command(0x0C);   // disable curser
	LCD_Send_Command(0x01);   // clear LCD
}

void LCD_display_String(const uint8 * s)
{

	uint8 i=0;
	while (s[i] != '\0'){
		LCD_display_Character(s[i]);
		i++;
	}
}

void LCD_go_To_ROW_Col(uint8 row,uint8 col){
	uint8 address;
	switch(row){
	case 0 :
			address=col;
			break;
	case 1 :
			address=col+0x40;
			break;
	case 2 :
			address=col+0x10;
			break;
	case 3 :
			address=col+0x50;
			break;
	}
	LCD_Send_Command(address | 0x80);
}

void LCD_Display_String_Row_Col(uint8 row,uint8 col, const uint8 *str){
	LCD_go_To_ROW_Col(row,col);
	LCD_display_String(str);

}

void LCD_intger_TO_String(uint8 data){
	char buff[16];
	itoa(data,buff,10); //int to string
	LCD_display_String(buff);
}
