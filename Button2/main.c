/*
 * main.c
 *
 *  Created on: May 2, 2015
 *      Author: abubakr
 */


#include <avr/io.h>
#include <util/delay.h>


#define set_bit(reg, bitnumber) (reg |= (1 << bitnumber))
#define clr_bit(reg, bitnumber) (reg &= ~(1 << bitnumber))
#define get_bit(reg, bitnumber) (reg & (1 << bitnumber))

int main ()
{
	clr_bit(DDRD, 0);
	clr_bit(DDRD, 1);
	clr_bit(DDRD, 2);

	set_bit(DDRD, 4);
	set_bit(DDRD, 5);
	set_bit(DDRD, 6);
	set_bit(DDRD, 7);
	while(1)
	{
		if (get_bit(PIND, 0))
		{
			set_bit(PORTD, 5);
			set_bit(PORTD, 4);

		}

		else if (get_bit(PIND, 1))
				{
					set_bit(PORTD, 6);
					set_bit(PORTD, 4);

				}

		else if (get_bit(PIND, 2))
				{
					set_bit(PORTD, 7);
					set_bit(PORTD, 4);

				}
				else
				{
					clr_bit(PORTD, 7);
					clr_bit(PORTD, 4);

				}

	}
}
