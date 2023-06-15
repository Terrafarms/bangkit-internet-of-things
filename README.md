# Bangkit-IoT

In the initial stage, we implemented IoT monitoring using only 3 sensors:

- Soil acidity (pH) sensor
- Soil moisture sensor
- Total Dissolved Solid (TDS) sensor

The sensor data obtained is transmitted online directly to the domain we have in Google Cloud Platform (GCP). The data is stored in JSON format in Firebase, and each transmission includes information about the state of the planted sensors along with a timestamp. Our IoT system can send data according to a specified time interval (10 seconds, 30 seconds, 1 minute, 1 hour, 1 day, etc.).

For further development, we will incorporate 2 main sensors and a mobile irrigation feature. The devices used are:

- Soil acidity (pH) sensor
- NPK (Nitrogen, Phosphorus, Potassium) sensor for soil
- Water pump
- Pipes and sprinklers

There is still plenty of potential for IoT development, such as automatic fertilization, mobile/automatic pest repellent, and IoT implementation integrated with computer vision, such as early fire detection in fire-prone agricultural land.
