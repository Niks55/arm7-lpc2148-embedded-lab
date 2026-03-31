
#include "LPC214x.h"                        /* LPC21xx definitions */
#include "keypad.h"


unsigned char Key_RowCol [4][4] = {	'0', '1', '2', '3',
									'4', '5', '6', '7',
									'8', '9', 'A', 'B',
									'C', 'D', 'E', 'F' };


void Keypad_Init(void)
{
//	PINSEL2 = 0x0;					// Pins P1.25-16 & Pins P1.36-26 are used as GPIO pins

	KEYPAD_DIR |= COL_MASK;			// GPIO Direction control -> pin is output 
	KEYPAD_DIR &= ~(ROW_MASK);		// GPIO Direction control -> pin is input 
}

unsigned char Keypad_Read(void)
{
	int i,tCnt=25;

	while(tCnt--)
	{
		for(i=0;i<4;i++)		// column 1 to 4
		{			
			IOSET1 |= COL_MASK;
			IOCLR1 |= (COL1 << i);
			
			if((IOPIN1&ROW1)==0)
			{
				return Key_RowCol[0][i];
			}
			else if((IOPIN1&ROW2)==0)
			{
				return Key_RowCol[1][i];
			}
			else if((IOPIN1&ROW3)==0)
			{
				return Key_RowCol[2][i];
			}
			else if((IOPIN1&ROW4)==0)
			{
				return Key_RowCol[3][i];
			}
		}
	}
	return NO_KEY_PRESSED;
}
