const int lightDependentResistor_pin = A5;
float valLightAnalog;
float valLight;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valLightAnalog = analogRead(lightDependentResistor_pin);
  valLight = valLightAnalog;
  
  Serial.print("Light: ");
  Serial.print(valLight);
  Serial.print("\n");
  
  delay(1000);
}
