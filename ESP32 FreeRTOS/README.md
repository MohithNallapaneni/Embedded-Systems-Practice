# ESP32 FreeRTOS Multi-Tasking System

## Overview

This project demonstrates basic multitasking on the ESP32 using FreeRTOS. Instead of executing all operations inside a single `loop()` function, multiple tasks are created and managed by the FreeRTOS scheduler.

The system consists of:

- LED Task – Blinks an LED periodically.
- Serial Task – Prints status messages to the Serial Monitor.

This project introduces the core concepts of FreeRTOS including task creation, scheduling, priorities, and non-blocking delays.

---

## Components Used

- ESP32 Development Board
- LED
- 220Ω Resistor
- Jumper Wires

---

## Circuit Connections

| Component | ESP32 Pin |
|------------|------------|
| LED Anode (+) | GPIO2 |
| LED Cathode (-) | GND (through 220Ω resistor) |

---

## Working Principle

1. The ESP32 initializes the Serial Monitor and GPIO2.
2. Two FreeRTOS tasks are created using `xTaskCreate()`.
3. The FreeRTOS scheduler manages task execution.
4. The LED Task blinks the onboard LED every second.
5. The Serial Task prints a status message every second.
6. Both tasks run independently without blocking each other.

---

## FreeRTOS Concepts Demonstrated

### Task Creation

Tasks are created using:

xTaskCreate()


Each task has:

- Task Function
- Task Name
- Stack Size
- Parameters
- Priority
- Task Handle

### Scheduler

The FreeRTOS scheduler decides which task should run at any given time.

### Task Priorities

Higher-priority tasks are executed before lower-priority tasks when both are ready.


Priority = 1


### Non-Blocking Delays


vTaskDelay(pdMS_TO_TICKS(1000))

Unlike Arduino's `delay()`, only the current task is paused while other tasks continue running.

---

## Project Flow


System Start
      ↓
Initialize Serial & GPIO
      ↓
Create LED Task
      ↓
Create Serial Task
      ↓
Scheduler Starts
      ↓
Run Tasks Concurrently

---

## Code Structure

### LED Task


void LEDTask(void *pvParameters)
{
    while(1)
    {
        digitalWrite(2, HIGH);
        vTaskDelay(pdMS_TO_TICKS(1000));

        digitalWrite(2, LOW);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

### Serial Task

void SerialTask(void *pvParameters)
{
    while(1)
    {
        Serial.println("ESP32 Running");

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

---

## Sample Serial Output


ESP32 Running
ESP32 Running
ESP32 Running
ESP32 Running

---

## What I Learned

- Introduction to FreeRTOS
- Task creation using `xTaskCreate()`
- Task function structure
- Scheduler operation
- Task priorities
- Non-blocking delays using `vTaskDelay()`
- Difference between Arduino `loop()` and FreeRTOS tasks
- Basic multitasking on ESP32

---

## Future Improvements

- Add sensor monitoring task
- Add OLED display task
- Use task priorities effectively
- Implement FreeRTOS Queues
- Implement Semaphores for shared resources
- Build a complete multi-tasking IoT system

---


