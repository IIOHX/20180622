const int pinCds = A0;
const int pinVcc = 13;
const int pinGnd = 12;

void setup() {
  Serial.begin(115200);
  pinMode(pinCds, INPUT);
 /* pinMode(pinVcc, OUTPUT);
  pinMode(pinGnd, OUTPUT);
  digitalWrite(pinVcc, HIGH);
  digitalWrite(pinGnd, LOW);
  */
  randomSeed(analogRead(A0));
  Serial.println(analogRead(A0));
  int tmp = random(0, 100);
  Serial.println(tmp);
  for(int i = 0; i < 5; i++) {
    Serial.println(tmp);
  }
}

void loop() {
  int adcData = analogRead(pinCds);
  Serial.println("adc 값은 " + String(adcData));
  delay(1000);

}
