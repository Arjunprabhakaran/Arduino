#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to pin 2
#define ONE_WIRE_BUS 2

// Setup a oneWire instance
OneWire oneWire(ONE_WIRE_BUS);

// Pass oneWire reference to DallasTemperature library
DallasTemperature sensors(&oneWire);

void setup() {
Serial.begin(9600);
sensors.begin();  // Start the DS18B20 sensor
}

void loop() {
sensors.requestTemperatures();  // Request temperature from all sensors
float tempC = sensors.getTempCByIndex(0); // Get temperature in Celsius (index 0 for first sensor)

Serial.print("Temperature: ");
Serial.print(tempC);
Serial.println(" °C");

delay(1000);  // Wait 1 second before next reading
}