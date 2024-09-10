#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2 // GPIO pin where the DS18B20 is connected

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(115200);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();
  float soilTemp = sensors.getTempCByIndex(0);
  Serial.print("Soil Temperature: ");
  Serial.println(soilTemp);
  delay(2000);
}
