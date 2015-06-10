/*
 * main.c
 *
 *  Created on: May 21, 2015
 *      Author: abubakr
 */


#include <avr/io.h>
#include <avr/interrupt.h>

#define NUMBER_OF_OVERFLOWS_PER_SECOND 4

unsigned char tick=0;

/* with clock=1Mhz and prescale F_CPU/1024 every count will take 1ms
 * so put initial timer counter=5  5 --> 255 (250ms per overflow)
 * so we need timer to overflow 4 times to get a 1 second
 */

void Timer_init_Normal_Mode(void){
	/* configure the timer
	 * 1. Non PWM mode FOC0=1
	 * 2. Normal Mode WGM01=0 & WGM00=0
	 * 3. Normal Mode COM00=0 & COM01=0
	 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<CS02) | (1<<CS00);
	TCNT0 = 5; //timer initial value
	TIMSK = (1<<TOIE0); //enable overflow interrupt
}

ISR(TIMER0_OVF_vect){
	tick++;
	if(tick == NUMBER_OF_OVERFLOWS_PER_SECOND){
		tick=0;
		if(PORTC == 9)	PORTC=0;
		else PORTC++;
	}
}

int main(void)
{
	DDRC = 0xFF; //configure all pins in PORTC as output pins.
	PORTC = 0; //initialization 7-seg display zero at the beginning.
	Timer_init_Normal_Mode(); //start the timer.
	sei(); //enable global interrupts in MC.
    while(1)
    {

    }
}