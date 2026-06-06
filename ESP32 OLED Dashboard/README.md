# ESP32 OLED Dashboard

## Overview

The ESP32 OLED Dashboard is a real-time monitoring system that reads analog input from a potentiometer, controls LED brightness using PWM, and displays system information on an SSD1306 OLED display using I2C communication.

This project demonstrates the integration of multiple ESP32 peripherals including ADC, PWM (LEDC), I2C communication, and OLED display interfacing.

---

## Components Used

* ESP32 Development Board
* SSD1306 OLED Display (128×64)
* Potentiometer
* LED
* 220Ω Resistor
* Jumper Wires

---

## Circuit Connections

### OLED Display

| OLED Pin | ESP32 Pin |
| -------- | --------- |
| VCC      | 3.3V      |
| GND      | GND       |
| SDA      | GPIO21    |
| SCL      | GPIO22    |

### Potentiometer

| Potentiometer Pin | ESP32 Pin |
| ----------------- | --------- |
| VCC               | 3.3V      |
| GND               | GND       |
| OUT               | GPIO34    |

### LED

| LED Pin     | ESP32 Pin                   |
| ----------- | --------------------------- |
| Anode (+)   | GPIO25                      |
| Cathode (-) | GND (through 220Ω resistor) |

---

## Working Principle

1. The potentiometer generates an analog voltage.
2. ESP32 reads this voltage through GPIO34 using its 12-bit ADC.
3. The ADC value (0–4095) is mapped to an 8-bit PWM value (0–255).
4. The PWM signal controls the brightness of the LED connected to GPIO25.
5. The OLED display continuously shows:

   * ADC Value
   * PWM Value
   * Duty Cycle Percentage
6. The dashboard updates in real time as the potentiometer position changes.

---

## Features

* Real-time ADC monitoring
* PWM-based LED brightness control
* OLED dashboard display
* I2C communication
* 12-bit ESP32 ADC usage
* LEDC PWM peripheral usage
* Live brightness percentage calculation

---

## Software Concepts Demonstrated

### ADC (Analog-to-Digital Conversion)

The ESP32 reads analog input from the potentiometer using its 12-bit ADC.

Range:

0 – 4095

### PWM (Pulse Width Modulation)

The LED brightness is controlled using the ESP32 LEDC PWM peripheral.

Configuration:

* Frequency: 5000 Hz
* Resolution: 8-bit
* Duty Cycle Range: 0 – 255

### I2C Communication

The OLED communicates with the ESP32 through the I2C protocol using:

* SDA → GPIO21
* SCL → GPIO22

### OLED Display Buffer

The SSD1306 library uses an internal display buffer. Data is first written to memory and then pushed to the display using:


display.display();


---

## Project Flow


Read ADC Value
       ↓
Map ADC to PWM
       ↓
Update LED Brightness
       ↓
Calculate Duty Cycle %
       ↓
Display Values on OLED
       ↓
Repeat
```

---

## Sample OLED Output

```text
ADC: 2340

PWM: 145

Duty: 56%
```

---

## What I Learned

* ESP32 ADC operation (12-bit resolution)
* ESP32 LEDC PWM configuration
* PWM frequency and resolution selection
* I2C communication using Wire library
* SSD1306 OLED interfacing
* Display buffer management
* Integration of multiple peripherals in a single embedded system
* Real-time sensor monitoring and visualization

---

## Future Improvements

* Add WiFi monitoring dashboard
* Display sensor graphs on OLED
* Add temperature and humidity sensors
* Implement FreeRTOS-based task management
* Send data to a cloud platform
* Add data logging functionality

---



