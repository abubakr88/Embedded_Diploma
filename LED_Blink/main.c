/*
 * main.c
 *
 *  Created on: May 1, 2015
 *      Author: abubakr
 */

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRD |=(1<<2);  // set port direction
while(1)
{
	PORTD |= (1<<5);  //
	_delay_ms(500);
	PORTD &=~(1<<5);
	_delay_ms(500);
}
}
