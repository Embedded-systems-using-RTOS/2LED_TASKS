# ESP32 FreeRTOS LED Control

## Description
This repository contains code for controlling two LEDs using an ESP32 microcontroller and the FreeRTOS real-time operating system. It demonstrates how to create tasks to independently control the LEDs.

## Features
- Control two LEDs (LED1 and LED2) independently.
- Utilizes FreeRTOS for task management.
- Demonstrates basic GPIO configuration and LED control.

## Getting Started

To get started with this project, follow these steps:

1. Clone or download this repository: git clone https://github.com/your-username/esp32-led-blink.git

2. Run the `./install.sh` script to download all the necessary dependencies for ESP-IDF.

3. Run the `. ./export` command to set up your environment for running IDF.py.

4. Configure the build file to target the ESP32 by running: idf.py set-target esp32

5. Build the project by running: idf.py build

6. Flash the compiled code to your ESP32 board using the following command, replacing `(name of your board)` with the appropriate board name: idf.py -p (name of your board) flash
   
7. Monitor the output of your ESP32 by running: idf.py monitor

### output:
![2led](https://github.com/Embedded-systems-using-RTOS/2LED_TASKS/assets/96942247/040947a1-994e-4e72-8613-d9b8dceff6f4)


This will display the log messages and allow you to observe the 2 LED blinking on your ESP32.

Feel free to explore, modify, and learn from this project. Happy coding!
