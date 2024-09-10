#define SOIL_MOISTURE_PIN 34                     // Analog pin

void setup() {
  Serial.begin(115200);
}

void loop() {
  int soilMoistureValue = analogRead(SOIL_MOISTURE_PIN);
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoistureValue);
  delay(2000);
}
