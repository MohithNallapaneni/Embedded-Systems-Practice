# ADC PWM Brightness Control

## Overview

A simple Arduino mini-project that controls LED brightness using a potentiometer.

The potentiometer value is read using the ADC and converted into a PWM signal to vary the LED brightness.

## Concepts Used

* ADC (Analog to Digital Conversion)
* PWM (Pulse Width Modulation)
* analogRead()
* analogWrite()
* map()

## Hardware Used

* Arduino Uno
* Potentiometer
* LED
* 220Ω Resistor

## Program Flow

1. Read potentiometer value using `analogRead(A0)`.
2. Convert ADC value (0–1023) to PWM value (0–255) using `map()`.
3. Output PWM signal to the LED using `analogWrite()`.
4. Repeat continuously.

## Key Learnings

* Reading analog sensor values
* ADC to PWM conversion
* Using the `map()` function
* Controlling LED brightness with PWM



