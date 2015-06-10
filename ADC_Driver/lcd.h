/*
 * lcd.h
 *
 *  Created on: May 29, 2015
 *      Author: abubakr
 */

#ifndef LCD_H_
#define LCD_H_

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

void LCD_Send_Command(uint8 command);

void LCD_display_Character(uint8 data);

void LCD_init(void);

void LCD_display_String(const uint8 * s);

void LCD_go_To_ROW_Col(uint8 row,uint8 col);

void LCD_Display_String_Row_Col(uint8 row,uint8 col, const uint8 *str);

void LCD_intger_TO_String(uint8 );
#endif /* LCD_H_ */
