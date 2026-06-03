# Smart Irrigation System

## Overview

A simple Arduino-based smart irrigation system that automatically controls a water pump based on soil moisture levels.

The system also supports rain detection and a manual override mode, allowing the user to take direct control of the pump when required.

## Concepts Used

* Finite State Machine (FSM)
* ADC (Analog to Digital Conversion)
* GPIO Control
* millis() Non-Blocking Timing
* Sensor-Based Decision Making
* State Transitions

## Hardware Used

* Arduino Uno
* Soil Moisture Sensor (Simulated using Potentiometer)
* Rain Sensor
* Manual Override Switch
* Pump (Simulated using LED)

## States

### AUTOMATIC

* Reads soil moisture level.
* Turns pump ON when soil is dry.
* Turns pump OFF when soil is sufficiently wet.
* Switches to RAIN mode when rain is detected.
* Switches to MANUAL mode when manual override is enabled.

### RAIN

* Forces pump OFF.
* Remains active while rain is detected.
* Returns to AUTOMATIC mode when rain stops.
* Can be overridden by MANUAL mode.

### MANUAL

* Forces pump ON.
* Ignores moisture and rain conditions.
* Returns to AUTOMATIC mode when manual override is disabled.

## State Transitions

AUTOMATIC → RAIN → AUTOMATIC

AUTOMATIC → MANUAL → AUTOMATIC

RAIN → MANUAL → AUTOMATIC

## Program Flow

1. Read moisture sensor value.
2. Read rain sensor status.
3. Read manual override switch.
4. Update system state based on sensor inputs.
5. Control pump according to the active state.
6. Display moisture readings on the Serial Monitor.
7. Repeat every second using `millis()`.

## Key Learnings

* Designing a multi-state embedded system
* Implementing FSMs using `enum` and `switch-case`
* Using ADC to read analog sensor values
* Using `millis()` instead of `delay()`
* Prioritizing system states and transitions
* Combining multiple sensors into a single control system

## Files

* `code.ino` – Arduino source code
* `flowchart.png` – Program flowchart
* `fsm_diagram.png` – FSM state transition diagram

