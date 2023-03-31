const int temperatureSensor_pin = A3;
const int soilMoistureSensor_pin = A4;
const int lightDependentResistor_pin = A5;

float temperatureSensorReading(int temperatureSensor_pin) {
  float valTempAnalog;
  float valTemp_Celsius;

  valTempAnalog = analogRead(this->temperatureSensor_pin);
  valTemp_Celsius = (valTempAnalog/1024)*5;
  valTemp_Celsius = valTemp_Celsius * 10;

  return valtemp_Celsius;
}


float soilMoistureSensorReading(int soilMoistureSensor_pin) {
  float valMoistureAnalog;
  float valMoisturePercenatge;

  valMoistureAnalog = analogRead(this->soilMoistureSensor_pin);
  valMoisturePercenatge = 100 - (valMoistureAnalog/1024)*100;

  return valMoisturePercenatge;
}


void setup() {
  Serial.begin(9600)

}

void loop() {
  // put your main code here, to run repeatedly:

}
