/*
 * button.c
 *
 *  Created on: May 24, 2015
 *      Author: abubakr
 */

#include "button.h"

static DIO_Config g_BUTTON_Config;

static void BUTTON_Configurations(void){
	g_BUTTON_Config.port = BUTTON_PORT;
	g_BUTTON_Config.pin_num = BUTTON_PIN_NUM;
	g_BUTTON_Config.direction = INPUT;
	g_BUTTON_Config.value= BUTTON_RELEASE;
}

void Button_Init(void){
	BUTTON_Configurations();
	DIO_Set_Direction(& g_BUTTON_Config); // set the direction of the BUTTON
}


uint8 BUTTON_Get_State(void){
	g_BUTTON_Config.value = DIO_Read_Pin(& g_BUTTON_Config);
	return g_BUTTON_Config.value;
}
