# Adafruit SHT31 Sensor Repository

## Introduction

Welcome to the repository for the Adafruit SHT31 sensor project. This sensor is specifically used for monitoring soil temperature and humidity, making it an invaluable tool for gardening, agriculture, and environmental monitoring.

## Features

- **Soil Temperature Measurement:** Get accurate readings of the soil temperature.
- **Soil Humidity Measurement:** Monitor the moisture level in the soil.
- **Compatibility with ESP32:** Easily integrate with ESP32 for data logging and IoT applications.
- **Serial Output:** Simple and clear readings outputted to the serial monitor.

## Hardware Requirements

- Adafruit SHT31 Sensor
- ESP32 Module
- Standard wiring cables

## Setup and Installation

1. **Sensor Connection:** Connect the SHT31 sensor to the ESP32 module. [Place Holder for Wiring Diagram]
2. **Power Supply:** Ensure a stable power supply for accurate readings.
3. **Environment Setup:** Place the sensor in the desired monitoring location, considering factors like soil type and sunlight exposure.

## Usage

The main functionality of this repository is to provide a basic test code for interfacing the Adafruit SHT31 sensor with an ESP32. The code outputs the temperature and humidity readings to the serial monitor.

### Simple Test Code

To verify the functionality of the sensor, load and run the `test.ino` file in the Arduino IDE. This script is designed to initialize the Adafruit SHT31 sensor and output the soil temperature and humidity readings to the serial monitor. Follow these steps:

1. Open the Arduino IDE on your computer.
2. Load the `test.ino` file from this repository.
3. Connect your ESP32 module to your computer via USB.
4. Select the appropriate board and port in the Arduino IDE.
5. Upload the code to your ESP32 module.
6. Open the serial monitor to view the temperature and humidity readings.

Ensure that your SHT31 sensor is properly connected to the ESP32 module as per the instructions in the "Setup and Installation" section.

## How to Contribute

We welcome contributions from the community. If you have suggestions or improvements, please feel free to fork the repository and submit a pull request.

## Acknowledgements

- Adafruit Industries for the SHT31 sensor.

## Contact

For any inquiries or issues regarding the repository, please open an issue in the GitHub repository or contact the repository maintainer at tejaswi@asu.edu
