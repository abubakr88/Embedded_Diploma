/*
 * main.c
 *
 *  Created on: May 21, 2015
 *      Author: abubakr
 */


#include <avr/io.h>
#include <avr/interrupt.h>

#define set_bit(reg, bitnumber) (reg |= (1 << bitnumber))
#define clr_bit(reg, bitnumber) (reg &= ~(1 << bitnumber))
#define get_bit(reg, bitnumber) (reg & (1 << bitnumber))

unsigned int count = 0;
void inittimer(){
	TCCR0 =0 ;
	TIMSK = (1<< TOIE0);
	OCR0 = 0;
}
void start_T0(void){
	TCCR0 = (1 << CS02) | (1 << CS00);
}
int main ()
{
	set_bit(DDRD, 5);
	inittimer();
	sei();
	start_T0();
	while(1);
	return (0);
}

ISR(TIMER0_OVF_vect)	{
if (count == 100){
	clr_bit(PORTD, 5);
	count = 0;
}
else{
	set_bit(PORTD, 5);
	count ++;

}
		//clr_bit(PORTD, 5);

}
