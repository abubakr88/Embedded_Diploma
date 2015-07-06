/*
 * uart.h
 *
 *  Created on: Jun 12, 2015
 *      Author: abubakr
 */

#ifndef UART_H_
#define UART_H_

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

void UART_init(void);
void UART_SendByte(uint8);
uint8 UART_ReceiveByte(void);
void UART_sendString(const uint8 *Str);
void UART_receiveString(uint8 *Str);
#endif /* UART_H_ */
