/*
 * main.c
 *
 *  Created on: May 10, 2015
 *      Author: abubakr
 */


#include <avr/io.h>
#include <util/delay.h>

#include <main.h>


int main (){
	int a=0,b=9;

	clr_bit(DDRD, 0);
	clr_bit(DDRD, 1);
	set_bit(DDRD, 4);
	set_bit(DDRD, 5);

	set_bit(DDRC, 2); // Sets the Data Direction Register bit of the first seven-segment display to 1.
	set_bit(DDRC, 3); // Sets the Data Direction Register bit of the second seven-segment display to 1.
	set_bit(DDRC, 4); // The following sets the four bits in the DDR of the BCD decoder (binary-coded decimal) to 1.
	set_bit(DDRC, 5);
	set_bit(DDRC, 6);
	set_bit(DDRC, 7);

	while(1){


	if (get_bit(PIND, 0)){
		clr_bit(PORTC, 3); // Disable the second display
		set_bit(PORTC, 2); // Enables the first display
		seven_seg1(a++);
		_delay_ms(500);
		if (a==10)
	    	a=0;
	}

	if (get_bit(PIND, 1)){
		clr_bit(PORTC, 2); // Disable the first display
		set_bit(PORTC, 3); // Enables the second display
		seven_seg1(b--);
		_delay_ms(500);
		if (b==0)
	    	b=9;
	}

	}
}
