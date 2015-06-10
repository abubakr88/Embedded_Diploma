/*
 * main.c
 *
 *  Created on: Jun 6, 2015
 *      Author: abubakr
 */

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

int main(void){

SET_BIT(DDRC,0);
SET_BIT(DDRC,1);
CLEAR_BIT(DDRA,0);
CLEAR_BIT(DDRA,1);
CLEAR_BIT(DDRA,2);
while(1){
if (BIT_IS_SET(PINA,0)){
	SET_BIT(PORTC,0);
	CLEAR_BIT(PORTC,1);
}
else if(BIT_IS_SET(PINA,1)) {
	SET_BIT(PORTC,1);
	CLEAR_BIT(PORTC,0);
}
else if (BIT_IS_SET(PINA,2)) {
	CLEAR_BIT(PORTC,0);
	CLEAR_BIT(PORTC,1);
}

}
}
