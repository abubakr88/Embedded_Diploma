/*
 * main.c
 *
 *  Created on: May 3, 2015
 *      Author: abubakr
 */

#include <avr/io.h>
#include <util/delay.h>
#include "main.h"

int main()
{
	set_bit(DDRD, 4); // Sets the Data Direction Register bit of the Buzzer to 1 (output)
	set_bit(DDRC, 2); // Sets the Data Direction Register bit of the first seven-segment display to 1.
	set_bit(DDRC, 3); // Sets the Data Direction Register bit of the second seven-segment display to 1.
	set_bit(DDRC, 4); // The following sets the four bits in the DDR of the BCD decoder (binary-coded decimal) to 1.
	set_bit(DDRC, 5);
	set_bit(DDRC, 6);
	set_bit(DDRC, 7);
	while(1)
	{

		set_bit(PORTC, 2); // Enables the first display

		int a,i;
		for (a = 0; a <= 9; a++)
		{
			seven_seg1(a);
			_delay_ms(1000);
			for (i = 0; i <= 9; i++)
			{
				clr_bit(PORTC, 3); // Stop the second display
				set_bit(PORTC, 2); // Enable the second display
				seven_seg2(i);
//				set_bit(PORTD, 4); // Start buzzer
				_delay_ms(1000);
//				clr_bit(PORTD, 4); // Stop buzzer
			}
			set_bit(PORTC, 3); // Enables the first display
		}

		clr_bit(PORTC, 2); // Stop the second display

//		set_bit(PORTD, 4); // Start buzzer
//		_delay_ms(1000);
//		clr_bit(PORTD, 4); // Stop buzzer
	}

}


