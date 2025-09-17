#include "DHT.h"

// Define the sensor type: DHT11 or DHT22
#define DHTTYPE DHT11   // Change to DHT22 if using DHT22

// Define the pin where the sensor is connected
#define DHTPIN 2        // Connect sensor data pin to Arduino digital pin 2

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
Serial.begin(9600);
Serial.println("DHT Sensor Reading Example");

dht.begin();
}

void loop() {
// Wait a few seconds between measurements
delay(2000);

// Reading humidity and temperature
float h = dht.readHumidity();
float t = dht.readTemperature();     // Temperature in Celsius
float f = dht.readTemperature(true); // Temperature in Fahrenheit

// Check if readings failed
if (isnan(h) || isnan(t) || isnan(f)) {
Serial.println("Failed to read from DHT sensor!");
return;
}

// Compute heat index in Celsius and Fahrenheit
float hif = dht.computeHeatIndex(f, h);
float hic = dht.computeHeatIndex(t, h, false);

// Print results
Serial.print("Humidity: ");
Serial.print(h);
Serial.print(" %\t");

Serial.print("Temperature: ");
Serial.print(t);
Serial.print(" °C ");
Serial.print(f);
Serial.print(" °F\t");

Serial.print("Heat index: ");
Serial.print(hic);
Serial.print(" °C ");
Serial.print(hif);
Serial.println(" °F");
}
