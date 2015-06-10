/*
 * segment.h
 *
 *  Created on: May 25, 2015
 *      Author: abubakr
 */

#ifndef SEGMENT_H_
#define SEGMENT_H_

#include "DIO.h"


#define SEG_ON  LOGIC_HIGH
#define SEG_OFF LOGIC_LOW


#define SEG_PIN_A 4
#define SEG_PIN_B 5
#define SEG_PIN_C 6
#define SEG_PIN_D 7
#define SEG_BIN_CONT 2

#define SEG_PORT_A 'C'
#define SEG_PORT_B 'C'
#define SEG_PORT_C 'C'
#define SEG_PORT_D 'C'
#define SEG_PORT_CONT 'C'

void SEGMENT_INIT(void);

void DISPLAY_SEG(uint8);

#endif /* SEGMENT_H_ */
