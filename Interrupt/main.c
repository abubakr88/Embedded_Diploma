/*
 * main.c
 *
 *  Created on: May 2, 2015
 *      Author: abubakr
 */


#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define set_bit(reg, bitnumber) (reg |= (1 << bitnumber))
#define clr_bit(reg, bitnumber) (reg &= ~(1 << bitnumber))
#define get_bit(reg, bitnumber) (reg & (1 << bitnumber))

int main ()
{
	set_bit(MCUCR, ISC00);
	set_bit(MCUCR, ISC01);
	set_bit(GICR, INT0);
	sei();

	set_bit(DDRD, 5);
	set_bit(DDRD, 6);
	set_bit(DDRD, 7);

	while(1)
	{
		set_bit(PORTD, 5);
		set_bit(PORTD, 6);
		set_bit(PORTD, 7);
	}
}

ISR(INT0_vect)	{

		clr_bit(PORTD, 5);
		clr_bit(PORTD, 6);
		set_bit(PORTD, 7);
		_delay_ms(1000);
}
