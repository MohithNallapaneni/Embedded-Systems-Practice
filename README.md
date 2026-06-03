# Embedded-Systems-Practice

# Embedded C Mini Projects Portfolio

## Overview

This repository contains a collection of mini-projects developed while learning Embedded C and Arduino-based embedded systems.

The objective of these projects was to gain hands-on experience with fundamental embedded concepts such as GPIO, UART, ADC, PWM, Finite State Machines (FSM), Interrupts, and Non-Blocking Timing using `millis()`.

Each project focuses on a specific embedded concept and gradually builds toward a complete sensor-based control system.

---

## Skills Demonstrated

* Embedded C Programming
* GPIO Control
* UART Communication
* ADC (Analog-to-Digital Conversion)
* PWM Generation
* Finite State Machines (FSM)
* Interrupts and ISR
* Non-Blocking Timing using `millis()`
* Sensor Interfacing
* State-Based System Design

---

## Projects

### 1. UART Controlled LED

**Concepts:**

* UART Communication
* GPIO Control
* Serial Command Processing

**Description:**
A simple command-driven LED controller that receives commands through the Serial Monitor and controls an LED.

**Commands:**

* ON
* OFF
* STATUS

---

### 2. ADC PWM Brightness Control

**Concepts:**

* ADC
* PWM
* Analog Input Processing

**Description:**
Reads an analog value from a potentiometer and maps it to a PWM output to control LED brightness.

---

### 3. Traffic Light FSM

**Concepts:**

* Finite State Machine (FSM)
* enum
* switch-case
* millis()

**Description:**
Implements a traffic light controller using a Finite State Machine with non-blocking timing.

**States:**

* RED
* GREEN
* YELLOW

---

### 4. Interrupt Counter

**Concepts:**

* Interrupts
* ISR (Interrupt Service Routine)
* volatile Variables
* attachInterrupt()

**Description:**
Counts button presses using an external interrupt and displays the count through the Serial Monitor.

---

### 5. Smart Irrigation System

**Concepts:**

* ADC
* FSM
* GPIO
* millis()
* Sensor-Based Control

**Description:**
A smart irrigation controller that automatically manages a water pump based on soil moisture levels.

**Features:**

* Automatic Irrigation Mode
* Rain Detection Mode
* Manual Override Mode
* Moisture Monitoring
* Pump Control

**FSM States:**

* AUTOMATIC
* RAIN
* MANUAL
* ERROR

---

## Repository Structure

```text
Embedded-C-Mini-Projects/
│
├── UART-Controlled-LED/
├── ADC-PWM-Brightness-Control/
├── Traffic-Light-FSM/
├── Interrupt-Counter/
└── Smart-Irrigation-System/
```

---

## Learning Outcome

These projects helped build a strong foundation in embedded systems programming by progressively introducing real-world concepts used in microcontroller-based applications.

The final Smart Irrigation System integrates multiple embedded concepts into a single project and serves as the capstone project of this portfolio.

---

## Future Improvements

* ESP32-Based Projects
* FreeRTOS Integration
* Communication Protocols (I2C, SPI, UART)
* Sensor Networks
* Embedded Drivers Development
* IoT-Based Monitoring Systems
