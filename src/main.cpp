#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author RUDRAKSHA SHARMA (Git- rudraksha-sh)
 * @date 2026-01-13
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */

#include <DHT.h>

// TODO 1:
#define DHTPIN 2

// TODO 2:
#define DHTTYPE DHT11

// TODO 3:
DHT dht(DHTPIN, DHTTYPE);

void setup() {

    // TODO 4:
    Serial.begin(9600);

    // TODO 5:
    dht.begin();

    // TODO 6:
    Serial.println("DHT11 OK");
}

void loop() {

    // TODO 7:
    float humi = dht.readHumidity();

    // TODO 8:
    float temp = dht.readTemperature();

    // TODO 9:
    if (isnan(humi) || isnan(temp)) {
        Serial.println("Error: Failed to read from DHT11 sensor!");
        return; // Skip rest of loop if reading failed
    }

    // TODO 10:
    Serial.print("Humidity: ");
    Serial.print(humi);
    Serial.print(" %  |  Temperature: ");
    Serial.print(temp);
    Serial.println(" °C");

    // TODO 11:
    delay(2000); // Wait 2 seconds before next reading
}