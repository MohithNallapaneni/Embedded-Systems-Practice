# UART Controlled LED

## Overview

A simple Arduino mini-project that controls an LED through UART commands entered in the Serial Monitor.

This project was created to practice UART communication, GPIO control, bit manipulation, and basic command parsing.

## Concepts Used

* UART Communication
* GPIO Control
* Bit Manipulation
* Serial Command Processing
* Variable Scope and State Tracking

## Hardware Used

* Arduino Uno
* Built-in LED (Pin 13)

## Commands

| Command | Action                      |
| ------- | --------------------------- |
| ON      | Turns LED ON                |
| OFF     | Turns LED OFF               |
| STATUS  | Displays current LED status |

## Program Flow

1. Initialize UART at 9600 baud.
2. Configure Pin 13 as output.
3. Wait for user input from Serial Monitor.
4. Read command.
5. Execute corresponding action:

   * ON → LED ON
   * OFF → LED OFF
   * STATUS → Print LED state

## Key Learnings

* Using Serial.begin() and Serial.readString()
* Using DDRB and PORTB registers
* Understanding variable scope
* Tracking system state using a boolean variable



