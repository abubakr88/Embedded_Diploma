/*
 * main.h
 *
 *  Created on: May 10, 2015
 *      Author: abubakr
 */

#ifndef MAIN_H_
#define MAIN_H_

#define set_bit(reg, bitnumber) (reg |= (1 << bitnumber))
#define clr_bit(reg, bitnumber) (reg &= ~(1 << bitnumber))
#define get_bit(reg, bitnumber) (reg & (1 << bitnumber))

#define seven_seg1(a) do {\
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

#define seven_seg2(a) do {\
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

// Pins 4 to 7 of Port C are connected to the BCD decoder (the chip under the displays) which is connected to both displays.
// Pin 2 of Port C enables the first display (the on the right).
// Pin 3 of Port C enables the second display (the on the left).


#endif /* MAIN_H_ */

