#include <Wire.h>
#include "Adafruit_SHT31.h"

Adafruit_SHT31 sht31 = Adafruit_SHT31();

void setup()
{
    // Initialize I2C communication
    Wire.begin();

    // Begin serial communication at 115200 baud rate
    Serial.begin(115200);

    // Initialize the SHT31 sensor
    if (!sht31.begin(0x44))
    {
        Serial.println("Could not find a valid SHT31 sensor, check wiring!");
        while (1)
            delay(1);
    }
}

void loop()
{
    // Read temperature and humidity from the sensor
    float temperature = sht31.readTemperature();
    float humidity = sht31.readHumidity();

    // Check if readings are valid, if they are NaN (not a number) then something went wrong!
    if (isnan(temperature) || isnan(humidity))
    {
        Serial.println("Failed to read from SHT31 sensor!");
    }
    else
    {
        Serial.print("Soil Temperature: ");
        Serial.print(temperature);
        Serial.println(" °C");
        Serial.print("Soil Humidity: ");
        Serial.print(humidity);
        Serial.println(" %");
    }

    // Delay between readings
    delay(2000);
}
