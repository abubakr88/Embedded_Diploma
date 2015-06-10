/*
 * ADC_Driver.h
 *
 *  Created on: Jun 6, 2015
 *      Author: abubakr
 */

#ifndef ADC_DRIVER_H_
#define ADC_DRIVER_H_

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

void ADC_init(void);
uint16 ADC_read (uint8);

#endif /* ADC_DRIVER_H_ */
