/*
 * main.c
 *
 *  Created on: Jun 20, 2015
 *      Author: abubakr
 */

#include "main.h"

#define M2_READY 0x10
#define SIZE 16

int main (void){
	uint8 a=0x00,passwd[SIZE];

	LCD_init();
//	eeprom_write_byte((uint16_t*)0,0x01); //save data=0x02 to address 0
	a= eeprom_read_byte((uint16_t*)0); //read data from address 0
////	a=0xbb;
	LCD_displayCharacter('0'+a);
	_delay_ms(1500);
//
//
//	if (a != 0xbb){
//
//	LCD_init();
//	LCD_displayString(passwd);
//	_delay_ms(1500);
//
//	eeprom_write_byte((uint16_t*)0,a); //save a to address 0
//
//	LCD_clearScreen();
//	LCD_displayCharacter(a);
//	_delay_ms(1500);
//	}
//
while(1){

}
return (0);
}
