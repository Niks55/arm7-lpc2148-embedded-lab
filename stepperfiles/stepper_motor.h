
/*

5V Stepper Motor
 
Connector J16 connect with stepper motor  as per below mentioned configuration

Pin - 1  : BLUE 
Pin - 2  : PINK
Pin - 3  : YELLOW
Pin - 4  : ORANGE
Pin - 5  : Red (Motor Vcc)

Motor Pins:
P0.4 to P0.7
*/


#define P0_4	(1 << 4)
#define P0_5	(1 << 5)
#define P0_6	(1 << 6)
#define P0_7	(1 << 7)

#define SM_COIL1	P0_4
#define SM_COIL2	P0_5
#define SM_COIL3	P0_6
#define SM_COIL4	P0_7

 

 
void StepperMotor_Init(void);



void SM_ROTATE_FS_CW(void);
