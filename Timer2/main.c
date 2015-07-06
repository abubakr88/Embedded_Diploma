/*
 * main.c
 *
 *  Created on: May 21, 2015
 *      Author: abubakr
 */


#include <avr/io.h>
#include <avr/interrupt.h>

#define NUMBER_OF_OVERFLOWS_PER_SECOND 4

volatile uint8_t tick;

/* with clock=1Mhz and prescale F_CPU/1024 every count will take 1ms
 * so put initial timer counter=5  5 --> 255 (250ms per overflow)
 * so we need timer to overflow 4 times to get a 1 second
 */

void timer0_init()
{
    // set up timer with prescaler = 256
	TCCR0 = (1<<FOC0) | (1<<CS02) | (1<<CS00);

    // initialize counter
    TCNT0 = 0;

    // enable overflow interrupt
    TIMSK |= (1 << TOIE0);

    // enable global interrupts
    sei();

    // initialize overflow counter variable
    tick = 0;
}

ISR(TIMER0_OVF_vect){
	tick++;
}

int main(void)
{
    // connect led to pin PC0
    DDRC |= (1 << 0);

    timer0_init();
    while(1)
    {
    	if(tick == NUMBER_OF_OVERFLOWS_PER_SECOND){
            PORTC ^= (1 << 0);    // toggles the led
            TCNT0 = 0;            // reset counter
    		tick=0;
    	}
    }
}
