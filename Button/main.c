/*
 * main.c
 *
 *  Created on: May 2, 2015
 *      Author: abubakr
 */

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

#define Set_Bit(Reg,Bit_Number) (Reg|=1<<Bit_Number)
#define Clear_Bit(Reg,Bit_Number) (Reg&=~(1<<Bit_Number))
#define Check_Bit(Reg,Bit_Number) (Reg&1<<Bit_Number)

int main(void){
	Clear_Bit(DDRD,2);  // set port direction as input
	Clear_Bit(DDRD,1);  // set port direction as input
	Clear_Bit(DDRD,0);  // set port direction as input

	Set_Bit(DDRD,7);  // set port direction as output
	Set_Bit(DDRD,6);  // set port direction as output
	Set_Bit(DDRD,5);  // set port direction as output



	while(1){
		if(Check_Bit(PIND,0)){
			Set_Bit(PORTD,5);
		}
		else
			Clear_Bit(PORTD,5);


		if(Check_Bit(PIND,1)){
			Set_Bit(PORTD,6);
		}
		else{
			Clear_Bit(PORTD,6);
		}

		if(Check_Bit(PIND,2)){
			Set_Bit(PORTD,7);
		}
		else{
			Clear_Bit(PORTD,7);
		}

		return 0;
}
}
