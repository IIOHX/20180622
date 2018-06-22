int led[4] = {11, 12, 13, 14};
int btn[4] = {3, 4, 5, 6};
int btn1[4] = {HIGH,};
int led1[4] = {LOW,};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 4; i++) {
    pinMode(led[i], OUTPUT);
    pinMode(btn[i], INPUT);
    digitalWrite(led[i], LOW);
  }
}

void loop() {
  for (int k = 0; k < 4; k++) {
    int value = digitalRead(btn[k]);
    if (value[k] == LOW && btn1[k] == HIGH) {
      if (led1[k] == HIGH) {
        digitalWrite(led[k], LOW);
        led1[k] = LOW;
      }   else if (led1[k] == LOW) {
        digitalWrite(led[k], HIGH);
        led1[k] = HIGH;
      }
      Serial.print(btn[k]);
      Serial.println("번째 버튼이 눌렸습니다");
    }
    btn1[k] = value;
  }
}
