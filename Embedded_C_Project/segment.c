/*
 * segment.c
 *
 *  Created on: May 25, 2015
 *      Author: abubakr
 */

#include "segment.h"

static DIO_Config g_SEG_A_Config;
static DIO_Config g_SEG_B_Config;
static DIO_Config g_SEG_C_Config;
static DIO_Config g_SEG_D_Config;

static DIO_Config g_SEG_Cont_Config;


static void SEGMENT_CONFIG(void){
	// set PORT
	g_SEG_A_Config.port = SEG_PORT_A;
	g_SEG_B_Config.port = SEG_PORT_B;
	g_SEG_C_Config.port = SEG_PORT_C;
	g_SEG_D_Config.port = SEG_PORT_D;
	g_SEG_Cont_Config.port = SEG_PORT_CONT;
	// SET PIN_Number
	g_SEG_A_Config.pin_num = SEG_PIN_A;
	g_SEG_B_Config.pin_num = SEG_PIN_B;
	g_SEG_C_Config.pin_num = SEG_PIN_C;
	g_SEG_D_Config.pin_num = SEG_PIN_D;
	g_SEG_Cont_Config.pin_num = SEG_BIN_CONT;
	// SET Direction
	g_SEG_A_Config.direction = OUTPUT;
	g_SEG_B_Config.direction = OUTPUT;
	g_SEG_C_Config.direction = OUTPUT;
	g_SEG_D_Config.direction = OUTPUT;
	g_SEG_Cont_Config.direction = OUTPUT;
	// SET Initial Value
	g_SEG_A_Config.value = SEG_OFF;
	g_SEG_B_Config.value = SEG_OFF;
	g_SEG_C_Config.value = SEG_OFF;
	g_SEG_D_Config.value = SEG_OFF;
	g_SEG_Cont_Config.value = SEG_OFF;
}

void SEGMENT_INIT(void){


	// Fill The Segment Structs
	SEGMENT_CONFIG();

	g_SEG_Cont_Config.value = SEG_ON;
	DIO_Write_Pin(& g_SEG_Cont_Config);

	DIO_Set_Direction(& g_SEG_A_Config); // set the direction of Seg_A
	DIO_Set_Direction(& g_SEG_B_Config); // set the direction of Seg_B
	DIO_Set_Direction(& g_SEG_C_Config); // set the direction of Seg_C
	DIO_Set_Direction(& g_SEG_D_Config); // set the direction of Seg_D

	// set the intial value

	DIO_Write_Pin(& g_SEG_A_Config);
	DIO_Write_Pin(& g_SEG_B_Config);
	DIO_Write_Pin(& g_SEG_C_Config);
	DIO_Write_Pin(& g_SEG_D_Config);

}


void DISPLAY_SEG(uint8 a){
	switch(a){
	case(0):
			g_SEG_A_Config.value = SEG_OFF;
			g_SEG_B_Config.value = SEG_OFF;
			g_SEG_C_Config.value = SEG_OFF;
			g_SEG_D_Config.value = SEG_OFF;

			DIO_Write_Pin(& g_SEG_A_Config);
			DIO_Write_Pin(& g_SEG_B_Config);
			DIO_Write_Pin(& g_SEG_C_Config);
			DIO_Write_Pin(& g_SEG_D_Config);
			break;
	case(1):
					g_SEG_A_Config.value = SEG_ON;
					g_SEG_B_Config.value = SEG_OFF;
					g_SEG_C_Config.value = SEG_OFF;
					g_SEG_D_Config.value = SEG_OFF;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;
	case(2):
					g_SEG_A_Config.value = SEG_OFF;
					g_SEG_B_Config.value = SEG_ON;
					g_SEG_C_Config.value = SEG_OFF;
					g_SEG_D_Config.value = SEG_OFF;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;

	case(3):
					g_SEG_A_Config.value = SEG_ON;
					g_SEG_B_Config.value = SEG_ON;
					g_SEG_C_Config.value = SEG_OFF;
					g_SEG_D_Config.value = SEG_OFF;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;

	case(4):
					g_SEG_A_Config.value = SEG_OFF;
					g_SEG_B_Config.value = SEG_OFF;
					g_SEG_C_Config.value = SEG_ON;
					g_SEG_D_Config.value = SEG_OFF;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;

	case(5):
					g_SEG_A_Config.value = SEG_ON;
					g_SEG_B_Config.value = SEG_OFF;
					g_SEG_C_Config.value = SEG_ON;
					g_SEG_D_Config.value = SEG_OFF;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;

	case(6):
					g_SEG_A_Config.value = SEG_OFF;
					g_SEG_B_Config.value = SEG_ON;
					g_SEG_C_Config.value = SEG_ON;
					g_SEG_D_Config.value = SEG_OFF;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;

	case(7):
					g_SEG_A_Config.value = SEG_ON;
					g_SEG_B_Config.value = SEG_ON;
					g_SEG_C_Config.value = SEG_ON;
					g_SEG_D_Config.value = SEG_OFF;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;

	case(8):
					g_SEG_A_Config.value = SEG_OFF;
					g_SEG_B_Config.value = SEG_OFF;
					g_SEG_C_Config.value = SEG_OFF;
					g_SEG_D_Config.value = SEG_ON;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;

	case(9):
					g_SEG_A_Config.value = SEG_ON;
					g_SEG_B_Config.value = SEG_OFF;
					g_SEG_C_Config.value = SEG_OFF;
					g_SEG_D_Config.value = SEG_ON;

					DIO_Write_Pin(& g_SEG_A_Config);
					DIO_Write_Pin(& g_SEG_B_Config);
					DIO_Write_Pin(& g_SEG_C_Config);
					DIO_Write_Pin(& g_SEG_D_Config);
					break;

	}
  }
