/*
 * main.c
 *
 *  Created on: May 23, 2015
 *      Author: abubakr
 */


//#include "app.h"
#include "App_Seg.h"

int main (void){

//	APP_Init();
//
//	while(1){
//		app();
//	}
	APP_Seg_nit();
	while(1){
		APP_Seg_Count();
	}

	return (0);
}
