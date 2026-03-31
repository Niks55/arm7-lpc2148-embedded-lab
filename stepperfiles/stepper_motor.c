
/*----------------------------------------------------------------------------------
                        ARK-LPC2148 STEPPER MOTOR LIBRARY
Filename: Stepper Motor.c
Controller: LPC2148(ARM7 family)
Oscillator: 12 MHz
-----------------------------------------------------------------------------------*/

#include <LPC214x.h>                        /* LPC21xx definitions */
#include "Stepper_Motor.h"
#include "delay.h"

 
//Stepper Motor Full-Step Switching Sequence.
unsigned char FullStep_Sequence[4] = {0x09, 0x0c, 0x06, 0x03};
signed char FullStep_Index = 0; 


void StepperMotor_Init(void)
{
	PINSEL0 = 0x0;												// Pin function Select -> P0.0 to P0.15 -> GPIO Port
	IO0DIR |= (SM_COIL1 | SM_COIL2 | SM_COIL3 | SM_COIL4);		// GPIO Direction control -> pin is output 
}


// Stepper Motor FullStep Rotate Clockwise 
void SM_ROTATE_FS_CW()
{
	
		IO0PIN = (FullStep_Sequence[FullStep_Index++] << 4); 
		
		if(FullStep_Index > 3)
		{
			FullStep_Index = 0;
		}
		delay_mSec(2);
	
}

 
