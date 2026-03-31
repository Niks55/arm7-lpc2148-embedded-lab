# Keypad and LCD Interfacing (MPLAB)

This project demonstrates interfacing a matrix keypad with an LCD display using Embedded C in MPLAB. It captures user input from the keypad and displays it in real-time on the LCD.

## Features
- Scanning and detecting key presses from a matrix keypad
- Debouncing key inputs for reliable operation
- Displaying pressed keys on LCD
- Real-time user interaction

## Files
- `main.c` → main program logic
- `keypad.c / keypad.h` → keypad interfacing and scanning logic
- `lcd.c / lcd.h` → LCD control and display functions
- `delay.c / delay.h` → timing and delay utilities

## Concepts Covered
- Matrix keypad scanning (row-column method)
- LCD interfacing (command & data modes)
- GPIO configuration
- Embedded C modular programming
- Real-time input handling

## Working Principle
- The keypad is scanned by activating rows and reading columns
- When a key is pressed, the corresponding row-column combination is detected
- The detected key is processed and sent to the LCD
- The LCD displays the input character instantly

## Applications
- Password entry systems
- Calculator interfaces
- User input panels in embedded systems
- Menu-driven embedded applications

## Tools Used
- MPLAB IDE
- Embedded C
