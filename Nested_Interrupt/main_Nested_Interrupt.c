/*
 * main_Nested_Interrupt.c
 *
 *  Created on: May 4, 2015
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

	set_bit(MCUCR, ISC11);
	set_bit(MCUCR, ISC10);
	set_bit(GICR, INT1);

	sei();

	set_bit(DDRC, 5);
	set_bit(DDRC, 6);
	set_bit(DDRC, 7);

	set_bit(DDRD, 5);
	set_bit(DDRD, 6);
	set_bit(DDRD, 7);

	while(1)
	{
	}
}

ISR(INT0_vect, ISR_NOBLOCK)	{

		clr_bit(PORTC, 5);
		clr_bit(PORTC, 6);
		clr_bit(PORTC, 7);

		set_bit(PORTD, 5);
		set_bit(PORTD, 6);
		set_bit(PORTD, 7);
		_delay_ms(1000);

}


ISR(INT1_vect, ISR_NOBLOCK)	{

		set_bit(PORTC, 5);
		set_bit(PORTC, 6);
		set_bit(PORTC, 7);

		clr_bit(PORTD, 5);
		clr_bit(PORTD, 6);
		clr_bit(PORTD, 7);
		_delay_ms(2000);

}
