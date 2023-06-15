#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include "time.h"

const char* ssid = "E-16_BWH";
const char* password = "syaugialkaf";
const char* serverName = "https://node-red.terrafarms-api.my.id/data"; // Replace with your Node-RED server IP and path

const char* ntpServer = "pool.ntp.org";

const int SOIL_MOISTURE_PIN = 32;
const int TDS_PIN = 34;
const int pH_PIN = 33;

const char* userId = "nLCClclYKfPgsvjzy2GsXVnIjKn2";
const int deviceId = 1;
unsigned long epochTime;

unsigned long getTime() {
  time_t now;
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)) {
    //Serial.println("Failed to obtain time");
    return(0);
  }
  time(&now);
  return now;
}

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  // Serial.print("IP address: ");
  // Serial.println(WiFi.localIP());

  pinMode(SOIL_MOISTURE_PIN, INPUT);
  pinMode(TDS_PIN, INPUT);
  pinMode(pH_PIN, INPUT);

  configTime(0, 0, ntpServer);

  int soilMoistureValue = analogRead(SOIL_MOISTURE_PIN);
  float pHValue = analogRead(pH_PIN);
  int rawTDSValue = analogRead(TDS_PIN);
  float moisturePercentage = map(soilMoistureValue, 0, 4095, 0, 100);

  // Calculate the TDS value
  float voltageTDS = rawTDSValue * (5.0 / 4095.0);
  float tdsValue = 133.42 * pow(voltageTDS, 3) - 255.86 * pow(voltageTDS, 2) + 857.39 * voltageTDS - 520.75;

  // Convert the TDS value to a positive number
  tdsValue = abs(tdsValue);

  // calculate pH value
  float voltagePH = pHValue*(3.3/4095.0);
  float pH=(-0.2142*voltagePH) + 3.284;

  // Print the soil moisture and TDS values to the serial monitor
  Serial.print("Soil Moisture: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  Serial.print("TDS value: ");
  Serial.println(tdsValue);

  Serial.print("pH value: ");
  Serial.println(pH);

  epochTime = getTime();
  Serial.print("Epoch Time: ");
  Serial.println(epochTime);

  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverName);

    time_t timestamp = time(nullptr);

    // Set the content type header
    http.addHeader("Content-Type", "application/json");

    // Create a JSON object and populate it with data
    StaticJsonDocument<200> jsonDocument;
    jsonDocument["updatedAt"] = epochTime;
    jsonDocument["user_id"] = String(userId);
    jsonDocument["device_id"] = String(deviceId);
    jsonDocument["moisture"] = String(moisturePercentage);
    jsonDocument["tds"] = String(tdsValue);
    jsonDocument["pH"] = String(pH);

    // Serialize the JSON object to a string
    String jsonMessage;
    serializeJson(jsonDocument, jsonMessage);

    int httpResponseCode = http.POST(jsonMessage);

    if (httpResponseCode > 0) {
      String response = http.getString();
      Serial.println("HTTP response code: " + String(httpResponseCode));
      Serial.println("Server response: " + response);
    } else {
      Serial.println("Error sending HTTP POST request");
    }

    http.end();
  } else {
    Serial.println("WiFi not connected");
  }

  esp_deep_sleep(10e6); // Sleep for 10 seconds (10e6 microseconds)
}

void loop() {
  
}
