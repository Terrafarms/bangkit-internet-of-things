
## Documentation

This code is an example of an ESP32-based IoT device that collects sensor data (soil moisture, TDS, and pH) and sends it to a Node-RED server for further processing and storage. The code demonstrates how to connect to a Wi-Fi network, read sensor values, and make an HTTP POST request to send the data.

### Dependencies

This code relies on the following libraries:

-   WiFi.h: Enables ESP32 to connect to a Wi-Fi network.
-   HTTPClient.h: Allows making HTTP requests to the server.
-   ArduinoJson.h: Provides functionality to work with JSON data.
-   time.h: Enables time synchronization with an NTP server.

Make sure to install these libraries before compiling and uploading the code.

### Configuration

Before using the code, make sure to update the following variables to match your setup:

-   `ssid`: The SSID (name) of your Wi-Fi network.
-   `password`: The password of your Wi-Fi network.
-   `serverName`: The URL or IP address of your Node-RED server where the data will be sent.
-   `ntpServer`: The NTP server used for time synchronization.
-   `userId`: Your user ID or identifier for identifying the data source.
-   `deviceId`: The ID or identifier of the IoT device.

### Operation

The code follows the following steps:

1.  Connect to Wi-Fi: The ESP32 connects to the configured Wi-Fi network.
    
2.  Read Sensor Values: The code reads sensor values from the soil moisture pin, TDS pin, and pH pin using the `analogRead()` function. The values are then converted to meaningful measurements (moisture percentage, TDS value, and pH value).
    
3.  Get Epoch Time: The code obtains the current epoch time using the `getTime()` function. This timestamp is used to indicate when the data was collected.
    
4.  Send Data to Server: If the Wi-Fi connection is successful, an HTTP POST request is made to the Node-RED server specified in `serverName`. The data is sent in JSON format, including the timestamp, user ID, device ID, moisture percentage, TDS value, and pH value.
    
5.  Deep Sleep: After sending the data, the ESP32 enters deep sleep mode for 10 seconds (10e6 microseconds).
    

### Usage

To use this code:

1.  Configure the variables mentioned in the "Configuration" section.
    
2.  Install the required libraries if not already installed.
    
3.  Compile and upload the code to your ESP32 board using the Arduino IDE or platform.
    
4.  Monitor the serial output to check the sensor readings, successful data transmission, and any errors encountered.
    
5.  Repeat the process to collect and send sensor data periodically.
    

Note: Ensure that your Node-RED server is configured to receive and process the incoming data correctly.

## Conclusion

This code provides a basic framework for an agriculture IoT device using an ESP32 microcontroller. It demonstrates the process of connecting to Wi-Fi, reading sensor values, and sending data to a server for further analysis. Feel free to modify and expand upon this code to suit your specific requirements.