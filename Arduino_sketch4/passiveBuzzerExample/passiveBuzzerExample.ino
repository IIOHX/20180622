const int pinBuzzer = 13;
const int aPitchData[8] = {523, 587, 659, 698, 783, 880, 987, 1046};
void setup() {
  pinMode(pinBuzzer, OUTPUT);

  /*
    tone(pinBuzzer, 130);
    delay(1000);
    tone(pinBuzzer, 147);
    delay(1000);
    tone(pinBuzzer, 165);
    delay(1000);
    tone(pinBuzzer, 175);
    delay(1000);
    tone(pinBuzzer, 296);
    delay(1000);
    tone(pinBuzzer, 220);
    delay(1000);
    tone(pinBuzzer, 247);
    delay(1000);
    tone(pinBuzzer, 262);
    delay(1000);
    noTone(pinBuzzer);
  */

}

void loop() {
  for (int i = 0; i < 8; i++) {
    tone(pinBuzzer, aPitchData[i]);
    delay(100);
  }
  noTone(pinBuzzer);


}
