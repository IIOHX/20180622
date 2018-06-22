int Data[8] = {13, 12, 11, 10, 9, 8, 7, 6}; //배열 순서가 바뀌면
int Select[6] = {22, 23, 24, 25, 26, 27};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(Data[i], OUTPUT);
  }
  for (int i = 0; i < 6; i++) {
    pinMode(Select[i], OUTPUT);
    digitalWrite(Select[i], LOW);
  }
}

void loop() {
  digitalWrite(Select[0], HIGH);
  digitalWrite(Select[1], HIGH);
  digitalWrite(Select[2], HIGH);
  digitalWrite(Select[3], HIGH);
  digitalWrite(Select[4], HIGH);
  digitalWrite(Select[5], LOW);

  for (int i = 0; i < 10; i++) {
    displayNumber(i);
    delay(1000);
  }
}
