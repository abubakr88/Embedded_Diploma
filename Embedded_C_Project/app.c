/*
 * app.c
 *
 *  Created on: May 24, 2015
 *      Author: abubakr
 */

void APP_Init(void)
{
	LED_Init();
	Button_Init();
}

void app(void){

	if (BUTTON_Get_State()){
		LED_Set_ON();
	}
	else{
		LED_Set_OFF();
	}
}
