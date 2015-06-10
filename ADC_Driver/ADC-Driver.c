/*
 * ADC-Driver.c
 *
 *  Created on: Jun 6, 2015
 *      Author: abubakr
 */

#include "ADC_Driver.h"


void ADC_init(void){
	ADMUX = 0x00;
	// prescaler / 8
	CLEAR_BIT(ADCSRA, 2);
	SET_BIT(ADCSRA, 1);
	SET_BIT(ADCSRA, 0);

	SET_BIT(ADCSRA, 7);   //ADC Enable
}

uint16 ADC_read (uint8 ch_num){
//	CLEAR_BIT(ADMUX, 5);
	ADMUX &= 0xE0;
	ADMUX |= ch_num;
	SET_BIT(ADCSRA , 6);
	while (BIT_IS_CLEAR(ADCSRA ,4));
	SET_BIT(ADCSRA ,4);
	return (ADC);

}
