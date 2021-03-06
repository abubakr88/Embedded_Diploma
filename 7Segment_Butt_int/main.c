/*
 * main.c
 *
 *  Created on: May 9, 2015
 *      Author: abubakr
 */




#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define set_bit(reg, bitnumber) (reg |= (1 << bitnumber))
#define get_bit(reg, bitnumber) (reg & (1 << bitnumber))
#define clr_bit(reg, bitnumber) (reg &= ~(1 << bitnumber))


#define seven_seg(a) do {\
	switch(a){\
	case(0):\
	clr_bit(PORTC, 4);\
	clr_bit(PORTC, 5);\
	clr_bit(PORTC, 6);\
	clr_bit(PORTC, 7);\
	break;\
	case(1):\
	set_bit(PORTC, 4);\
	clr_bit(PORTC, 5);\
	clr_bit(PORTC, 6);\
	clr_bit(PORTC, 7);\
	break;\
	case(2):\
	clr_bit(PORTC, 4);\
	set_bit(PORTC, 5);\
	clr_bit(PORTC, 6);\
	clr_bit(PORTC, 7);\
	break;\
	case(3):\
	set_bit(PORTC, 4);\
	set_bit(PORTC, 5);\
	clr_bit(PORTC, 6);\
	clr_bit(PORTC, 7);\
	break;\
	case(4):\
	clr_bit(PORTC, 4);\
	clr_bit(PORTC, 5);\
	set_bit(PORTC, 6);\
	clr_bit(PORTC, 7);\
	break;\
	case(5):\
	set_bit(PORTC, 4);\
	clr_bit(PORTC, 5);\
	set_bit(PORTC, 6);\
	clr_bit(PORTC, 7);\
	break;\
	case(6):\
	clr_bit(PORTC, 4);\
	set_bit(PORTC, 5);\
	set_bit(PORTC, 6);\
	clr_bit(PORTC, 7);\
	break;\
	case(7):\
	set_bit(PORTC, 4);\
	set_bit(PORTC, 5);\
	set_bit(PORTC, 6);\
	clr_bit(PORTC, 7);\
	break;\
	case(8):\
	clr_bit(PORTC, 4);\
	clr_bit(PORTC, 5);\
	clr_bit(PORTC, 6);\
	set_bit(PORTC, 7);\
	break;\
	case(9):\
	set_bit(PORTC, 4);\
	clr_bit(PORTC, 5);\
	clr_bit(PORTC, 6);\
	set_bit(PORTC, 7);\
	break;\
	}\
	} while(0)


int main (){

	clr_bit(MCUCR, ISC00);
	set_bit(MCUCR, ISC01);
	set_bit(GICR, INT0);
	sei();


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

	set_bit(PORTC, 2); // Enables the first display

	while(1){


	}


}
int a=0;

ISR(INT0_vect)	{
	seven_seg(a++);
	_delay_ms(500);
	if (a==10)
    	a=0;
}
