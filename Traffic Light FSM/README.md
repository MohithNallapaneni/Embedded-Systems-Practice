# Traffic Light FSM

## Overview

A simple Arduino mini-project that implements a traffic light controller using a Finite State Machine (FSM) and non-blocking timing with `millis()`.

The traffic light cycles through RED, GREEN, and YELLOW states continuously.

## Concepts Used

* Finite State Machine (FSM)
* enum
* switch-case
* millis()
* GPIO Control
* Bit Manipulation

## Hardware Used

* Arduino Uno
* Red LED
* Yellow LED
* Green LED
* 220Ω Resistors

## States

| State  | Duration  |
| ------ | --------- |
| RED    | 5 seconds |
| GREEN  | 5 seconds |
| YELLOW | 2 seconds |

## State Transitions

RED → GREEN → YELLOW → RED

## Program Flow

1. Initialize LED output pins.
2. Start in the RED state.
3. Turn ON the LED corresponding to the current state.
4. Monitor elapsed time using `millis()`.
5. Change to the next state when the required time has elapsed.
6. Repeat continuously.

## Key Learnings

* Designing a Finite State Machine
* Using `enum` to represent states
* Implementing state transitions using `switch-case`
* Using `millis()` for non-blocking timing
* Controlling multiple outputs using GPIO registers



