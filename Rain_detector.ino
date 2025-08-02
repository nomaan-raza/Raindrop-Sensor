#Rain drop sensor
const int rainSensorPin= D2;
const int ledPin= D1;
void setup() {
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);
  Serial.begin(9600);
}
void loop() {
  int sensorValue=digitalRead(rainSensorPin);
  Serial.print("Rain Sensor Value: ");
  Serial.println(sensorValue);
  if(sensorValue==LOW) {
    digitalWrite(ledPin,HIGH);
    Serial.println("Rain detected! LED ON");
  } else {
    digitalWrite(ledPin,LOW);
    Serial.println("No Rain detected. LED OFF");
  }

}
