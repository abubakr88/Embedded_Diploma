#include <avr/io.h>


// global variable to count the number of overflows
volatile uint8_t tot_overflow;

// TIMER0 overflow interrupt service routine
// called whenever TCNT0 overflows
ISR(TIMER0_OVF_vect)
{
    // keep a track of number of overflows
    tot_overflow++;
}

int main(void)
{
    // connect led to pin PC0
    DDRC |= (1 << 0);

    // initialize timer
    timer0_init();

    // loop forever
    while(1)
    {
        // check if no. of overflows = 12
        if (tot_overflow >= 12)  // NOTE: '>=' is used
        {
            // check if the timer count reaches 53
            if (TCNT0 >= 53)
            {
                PORTC ^= (1 << 0);    // toggles the led
                TCNT0 = 0;            // reset counter
                tot_overflow = 0;     // reset overflow counter
            }
        }
    }
}
