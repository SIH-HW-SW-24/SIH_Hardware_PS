#define RAIN_SENSOR_PIN 35                   // Analog pin

void setup() {
  Serial.begin(115200);
}

void loop() {
  int rainValue = analogRead(RAIN_SENSOR_PIN);
  Serial.print("Rain Sensor Value: ");
  Serial.println(rainValue);
  delay(2000);
}
