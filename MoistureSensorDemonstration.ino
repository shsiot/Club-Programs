void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  int SensorValue = analogRead(A0);
  Serial.print(SensorValue); Serial.print(" - ");

  if(SensorValue >= 1000)
  {
    Serial.println("Sensor is not in the Soil or DISCONNECTED");
  }
  else if(SensorValue < 1000 && SensorValue >= 600)
  {
    Serial.println("Soil is DRY");
  }
  else if(SensorValue < 600 && SensorValue >= 370)
  {
    Serial.println("Soil is HUMID");
  }
  else if(SensorValue < 370)
  {
    Serial.println("Sensor in WATER");
  }
  delay(50);
}
