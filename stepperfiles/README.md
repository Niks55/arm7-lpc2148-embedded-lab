# Stepper Motor Control using MPLAB (Embedded C)

This project demonstrates controlling a stepper motor using a microcontroller programmed in Embedded C with MPLAB. It focuses on generating proper stepping sequences to achieve controlled motion of the motor.

## Features
- Stepper motor rotation control
- Direction control (clockwise / counterclockwise)
- Speed control using delay variation
- Sequential coil excitation

## Files
- `main.c` → main control logic for motor operation
- `delay.c / delay.h` → timing control for step speed

## Concepts Covered
- Stepper motor working principle
- GPIO-based motor control
- Sequential signal generation
- Timing control for speed variation
- Embedded C hardware interfacing

## Working Principle
- The stepper motor coils are energized in a specific sequence
- Each step corresponds to a controlled angular movement
- By repeating the sequence, continuous rotation is achieved
- Changing the sequence order reverses the direction
- Adjusting delay between steps controls motor speed

## Applications
- Robotics and motion control
- CNC machines
- Position control systems
- Automated embedded systems

## Tools Used
- MPLAB IDE
- Embedded C
