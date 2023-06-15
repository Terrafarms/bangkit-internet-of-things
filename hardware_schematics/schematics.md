## Schematic

![image](https://github.com/Terrafarms/bangkit-internet-of-things/assets/125639879/3f138e37-fb9b-4c48-8c00-a927e28770aa)

This schematic represents the connections required for the ESP32-based IoT device described in the code.

### Components

- ESP32 Development Board
- Power Bucket 12V to 5V
- Power Input
- Soil Moisture Sensor
- TDS Sensor
- pH Sensor

### Pin Connections

- ESP32 Pin 32 (SOIL_MOISTURE_PIN) - Soil Moisture Sensor Signal Pin
- ESP32 Pin 34 (TDS_PIN) - TDS Sensor Signal Pin
- ESP32 Pin 33 (pH_PIN) - pH Sensor Signal Pin

### Wiring Instructions

1. Connect the VCC pin of the Soil Moisture Sensor to the 3.3V power supply pin of the ESP32.
2. Connect the GND pin of the Soil Moisture Sensor to the GND pin of the ESP32.
3. Connect the signal pin of the Soil Moisture Sensor to ESP32 Pin 32 (SOIL_MOISTURE_PIN).
4. Connect the VCC pin of the TDS Sensor to the 3.3V power supply pin of the ESP32.
5. Connect the GND pin of the TDS Sensor to the GND pin of the ESP32.
6. Connect the signal pin of the TDS Sensor to ESP32 Pin 34 (TDS_PIN).
7. Connect the VCC pin of the pH Sensor to the 3.3V power supply pin of the ESP32.
8. Connect the GND pin of the pH Sensor to the GND pin of the ESP32.
9. Connect the signal pin of the pH Sensor to ESP32 Pin 33 (pH_PIN).

**Note:** Make sure to refer to the datasheets and pinout diagrams of the specific sensors and ESP32 board you are using for accurate connections.

