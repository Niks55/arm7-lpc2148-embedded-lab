#define ROW1	(1 << 22)
#define ROW2	(1 << 23)
#define ROW3	(1 << 24)
#define ROW4	(1 << 25)

#define COL1	(1 << 16)
#define COL2	(1 << 17)
#define COL3	(1 << 18)
#define COL4	(1 << 19)

#define ROW_MASK	(ROW4 | ROW3 | ROW2 | ROW1)
#define COL_MASK	(COL4 | COL3 | COL2 | COL1)

#define KEYPAD_DIR		IO1DIR
#define KEYPAD_PIN		IO1PIN

#define KEYPAD_SET		IO1SET		
#define KEYPAD_CLR		IO1CLR

#ifndef NO_KEY_PRESSED
#define NO_KEY_PRESSED	'#'
#endif

void Keypad_Init(void);
unsigned char Keypad_Read(void);
