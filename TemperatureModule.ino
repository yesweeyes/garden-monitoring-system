int temperatureSensor_pin = A3; // LM35 Out to D3
float valTempAnalog;
float valTemp_Celsius;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valTempAnalog = analogRead(temperatureSensor_pin);
  valTemp_Celsius = (valTempAnalog/1024)*5;
  valTemp_Celsius = valTemp_Celsius * 10;
  
  Serial.print(valTemp_Celsius);
  Serial.print("\n");
  
  delay(1000);
}
