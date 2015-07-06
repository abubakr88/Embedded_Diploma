/*
 * main.c
 *
 *  Created on: Jun 20, 2015
 *      Author: abubakr
 */

#include <avr/io.h>
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
xSemaphoreHandle mysemaphore;
void task1 (void* ptr){
	char ret =0;

	DDRD |= (1<< PD5);
	while(1){
		ret = xSemaphoreTake(mysemaphore, 500);

		if (ret == 1){
		PORTD ^= (1<<PD5); // XOR to Blink the LED
		vTaskDelay(500);
	}
	}
}

void task2 (void* ptr){
	DDRD |= (1<< PD6);
	while(1){
		PORTD ^= (1<<PD6); // XOR to Blink the LED
		vTaskDelay(1000);
	}
}

void main (void){
	xTaskCreate(task1,"task_one",60,NULL,3,NULL);  //pv pointer to void, 60 word
	xTaskCreate(task2,"task_two",60,NULL,2,NULL);
	vTaskStartScheduler();
}
