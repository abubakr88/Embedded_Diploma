/*
 * External_EEPROM_I2C.c
 *
 * Created: 3/12/2014 12:05:19 PM
 *  Author: Mohamed Tarek
 */
 

#include"External_EEPROM.h"
#include "std_types.h"
#include "micro_config.h"
#include "common_macros.h"
#include <util/delay.h>

int main(void)
{
	uint8 a=0,passwd[10]={},val = 0;
	uint16 i,address=0;
	DDRD  = 0xFF;
	PORTD = 0x00;

	// Init EEPROM
	LCD_init();
	EEPROM_Init();

	while(1)
	{
		a=sizeof(passwd)/sizeof(passwd[0]);
		address = 0x0312;

		for (i=0;i<a;i++){
			EEPROM_Write_Byte( address++, passwd[i]);
			_delay_ms(10);
		}


//		EEPROM_Read_Byte(0x0313, &val); // Read 0x0F from the external EEPROM
//			LCD_clearScreen();
//			LCD_displayCharacter('0'+ val);
//			_delay_ms(1500);

			address = 0x0312;

		for (i=0;i<a;i++){
			EEPROM_Read_Byte(address++, &passwd[i]); // Read 0x0F from the external EEPROM

			LCD_clearScreen();
			LCD_displayCharacter('0'+passwd[i]);
			_delay_ms(1000);
		}

			passwd[a]='\0';
			LCD_clearScreen();
			LCD_displayString(passwd);
			_delay_ms(1000);
//

	}
	return 0;
}
