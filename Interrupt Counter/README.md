# Interrupt Counter

## Overview

A simple Arduino mini-project that counts button presses using external interrupts and displays the count on the Serial Monitor.

The project demonstrates event-driven programming using Interrupt Service Routines (ISR) instead of continuously polling the button state.

## Concepts Used

* Interrupts
* Interrupt Service Routine (ISR)
* volatile Variables
* attachInterrupt()
* INPUT_PULLUP
* UART Communication

## Hardware Used

* Arduino Uno
* Push Button

## Program Flow

1. Configure the push button as `INPUT_PULLUP`.
2. Attach an interrupt to Pin 2.
3. When the button is pressed, the ISR executes.
4. The ISR increments the counter.
5. The main loop detects the updated count.
6. Display the count on the Serial Monitor.

## Key Learnings

* Understanding interrupt-based programming
* Creating and using ISRs
* Using `volatile` variables with interrupts
* Configuring external interrupts using `attachInterrupt()`
* Detecting button presses without continuous polling



