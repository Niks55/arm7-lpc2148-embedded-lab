/*****************************************************************************

DEVELOPED BY:- ARK DEVELOPER
WHAT PROGRAM DO:-This Program read key from 4x4matrix KeyPad and display pressed key to LCD.

******************************************************************************/

#include "LPC214x.h"                        /* LPC21xx definitions */

#include "lcd.h"	// User defined LCD library which conatins the lcd routines
#include "keypad.h"
#include "delay.h"	// User defined library which conatins the delay routines


/*****************************************************************************
**   Main Function  main()
******************************************************************************/
int main (void)
{
	/* Initilize the lcd before displaying any thing on the lcd */
	LCD_Init();

	Keypad_Init();		// 4x4 Matrix Key Init
	
//	LCD_ScrollMessage("WELCOME TO ARK, ARM-LPC2148 DEVELOPMENT BOARD");

	/* Display "ARK, ARM-LPC2148" on first line*/
	LCD_GoToLineOne();
	LCD_DisplayString("ARK, ARM-LPC2148");
	
	delay_mSec(2000);

	while(1)
	{
		unsigned char Key;

		Key = Keypad_Read();

		if(Key != NO_KEY_PRESSED)
		{
			LCD_GoToLineTwo();
			LCD_DisplayString("Key ");	 
			LCD_DataWrite(Key);
			LCD_DisplayString(" is Pressed");
	
		//	delay_mSec(1000);
			  delay_mSec(500);
			LCD_ClearLineTwo();
		}
	}

//	return 0;
}

/******************************************************************************
**                            End Of File
******************************************************************************/
