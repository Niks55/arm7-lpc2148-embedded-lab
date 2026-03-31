# LED Blinking using GPIO (MPLAB)

This project demonstrates basic GPIO control by blinking an LED using Embedded C in MPLAB. It serves as a fundamental introduction to microcontroller programming and hardware interfacing.

## Features
- Configuring GPIO pins as output
- Controlling LED ON/OFF states
- Implementing time delays for blinking effect
- Continuous looping for periodic signal generation

## Files
- `main.c` → main program controlling LED behavior
- `delay.c / delay.h` → delay generation functions

## Concepts Covered
- GPIO configuration and control
- Digital output signaling
- Timing and delay implementation
- Embedded C fundamentals

## Working Principle
- The microcontroller configures a GPIO pin as output
- The pin is set HIGH → LED turns ON
- The pin is set LOW → LED turns OFF
- A delay is introduced between transitions to create visible blinking

## Applications
- Status indicators
- Debugging signals
- Heartbeat signals in embedded systems
- Basic hardware testing

## Tools Used
- MPLAB IDE
- Embedded C
