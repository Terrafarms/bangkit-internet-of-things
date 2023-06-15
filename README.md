
![IoT](https://github.com/Terrafarms/bangkit-internet-of-things/assets/54931717/2d2961e6-85e8-4d7d-b3a6-a35a2d36733e)

# Bangkit-Terrafarms-IoT

This project aims to develop an Internet of Things (IoT) solution for agriculture monitoring and automation. The system utilizes the ESP32 microcontroller board along with various sensors and actuators to provide real-time data about soil conditions and enable efficient irrigation.

## Features

- Monitoring of soil acidity (pH), soil moisture, and total dissolved solids (TDS) using dedicated sensors.
- Real-time data transmission to the Google Cloud Platform (GCP) for storage and analysis.
- Data stored in Firebase in JSON format, including sensor states and timestamps.
- Configurable transmission intervals (e.g., 10 seconds, 30 seconds, 1 minute, 1 hour, 1 day).
- Integration of two additional sensors: soil acidity (pH) sensor and NPK (Nitrogen, Phosphorus, Potassium) sensor for soil analysis.
- Mobile irrigation feature with a water pump, pipes, and sprinklers for automated watering.
- Potential for future development, including automatic fertilization, mobile/automatic pest repellent, and integration with computer vision for early fire detection in fire-prone agricultural land.

## Getting Started

To replicate or contribute to this project, follow the steps below:

1. **Hardware Setup**: Connect the ESP32 board to the soil acidity (pH) sensor, soil moisture sensor, TDS sensor, soil acidity (pH) sensor, NPK sensor, water pump, pipes, and sprinklers. Refer to the hardware documentation for proper wiring.

2. **Software Setup**: Install the required software dependencies and libraries. The primary programming language for this project is Arduino. Make sure you have the Arduino IDE or platform installed.

3. **Configuration**: Configure the ESP32 board with your Wi-Fi credentials and GCP project settings. Ensure that the Firebase database is set up to receive data.

4. **Upload Code**: Upload the provided Arduino code to the ESP32 board using the Arduino IDE or platform.

5. **Testing**: Verify that the sensors are working correctly by monitoring the data transmission in the Firebase database. Test the mobile irrigation feature to ensure the water pump, pipes, and sprinklers are functioning as expected.

## Folder Structure

- `bangkit-internet-of-things/`
  - `arduino_code/` - Arduino code for ESP32
  - `documentation/` - Additional project documentation
  - `hardware_schematics/` - Hardware schematics and wiring
- `README.md` - Project readme file

## Resources

- [ESP32 Documentation](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/)
- [Arduino IDE](https://www.arduino.cc/en/software)
- [Firebase Documentation](https://firebase.google.com/docs)
- [Google Cloud Platform (GCP) Documentation](https://cloud.google.com/docs)

## Contributing

Contributions to this project are welcome. If you have any ideas, suggestions, or improvements, please submit a pull request. Make sure to follow the existing coding style and guidelines.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). Feel free to use, modify, and distribute the code as per the license terms.

## Contact

For any inquiries or feedback, please contact the project team at contact@terrafarms.id

