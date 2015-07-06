/*
 * spi.h
 *
 *  Created on: Jun 13, 2015
 *      Author: abubakr
 */

#ifndef SPI_H_
#define SPI_H_

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

void SPI_Init_Master(void);
void SPI_Init_Slave(void);
void SPI_SendByte(uint8 data);
uint8 SPI_RecieveByte(void);

void SPI_sendString(const uint8 *Str);
void SPI_receiveString(uint8 *Str);

#endif /* SPI_H_ */
