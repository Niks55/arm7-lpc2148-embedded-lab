# Switch Controlled LED (GPIO Interfacing) - MPLAB

This project demonstrates interfacing a physical switch with an LED using Embedded C in MPLAB. The LED state is controlled based on the switch input, showcasing basic digital input-output interaction in microcontrollers.

## Features
- Reading digital input from a switch
- Controlling LED based on input state
- Real-time response to user interaction
- Simple hardware control logic

## Files
- `main.c` → main program logic
- `delay.c / delay.h` → debounce and timing functions

## Concepts Covered
- GPIO input and output configuration
- Digital input reading
- Switch debouncing
- Embedded C control flow

## Working Principle
- The switch is connected to a GPIO input pin
- The LED is connected to a GPIO output pin
- When the switch is pressed, the microcontroller reads the input signal
- Based on the input state, the LED is turned ON or OFF
- A small delay may be used to avoid false triggering (debouncing)

## Applications
- User-controlled embedded systems
- Control panels
- Basic input-output interfacing
- Interactive embedded devices

## Tools Used
- MPLAB IDE
- Embedded C
