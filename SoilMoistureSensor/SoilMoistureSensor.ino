const int soilMoistureSensor_pin = A4;
float valMoistureAnalog;
float valMoisturePercenatge;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valMoistureAnalog = analogRead(soilMoistureSensor_pin);
  valMoisturePercenatge = 100 - (valMoistureAnalog/1024)*100;
  
  Serial.print("Moisture Percentage: ");
  Serial.print(valMoisturePercenatge);
  Serial.print("%\n");
  
  delay(1000);
}