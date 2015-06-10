/*
 * App_Seg.c
 *
 *  Created on: May 25, 2015
 *      Author: abubakr
 */

#include "App_Seg.h"

void APP_Seg_nit(void){
	SEGMENT_INIT();
}

void APP_Seg_Count(void){
	int i;
	for (i=0;i<=9;i++){
		DISPLAY_SEG(i);
		_delay_ms(8000);
	}
}
