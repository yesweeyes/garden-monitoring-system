const int humiditySensor_pin = 4;

int valHumidityAnalog;
int valHumidityPercentage;

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
}

void loop() {
  valHumidityAnalog = digitalRead(humiditySensor_pin);
  valHumidityPercentage = map(valHumidityAnalog, 0, 1023, 10, 70);

  Serial.print("Humidity: ");
  Serial.print(valHumidityPercentage);
  Serial.println("%");

  delay(1000);
}