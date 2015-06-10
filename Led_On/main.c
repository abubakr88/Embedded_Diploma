/*
 * main.c
 *
 *  Created on: May 1, 2015
 *      Author: abubakr
 */


#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRD|=(1<<0);  // set port direction
while(1)
{
	PORTD |= (1<<0);  //
	_delay_ms(500);
	PORTD &=~(1<<0);

}
}
