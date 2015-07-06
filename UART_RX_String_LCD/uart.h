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
void UART_SEND_String(const char *s);
void UART_Receive_String(const char *s);

#endif /* UART_H_ */
