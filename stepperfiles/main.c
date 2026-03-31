/*----------------------------------------------------------------------------------
		STEPPER MOTOR EXAMPLE
		
Controller: LPC2148(ARM7 family)
Oscillator: 12 MHz
 */
#include <LPC214x.h>                        /* LPC21xx definitions */
#include "Stepper_Motor.h"
#include "delay.h"


int main (void)
{
	

	StepperMotor_Init();
	delay_mSec(10);
	while(1)
	{
 SM_ROTATE_FS_CW();
	 
	}
  return 0;
}
