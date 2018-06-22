int apinLed[4] = {11, 12, 13, 14};
int apinSwitch[4] = {3, 4, 5, 6};

bool aflagLed[4] = {false,};


void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 4; i++) {
    pinMode(apinLed[i], OUTPUT);
    pinMode(apinSwitch[i], INPUT);
  }
  Serial.println("SWITCH/LED Application");
}

void loop() {
  for (int i = 0; i < 4; i++) {
    if (digitalRead(apinSwitch[i]) == 0) {
      if (aflagLed[i] == false) {
        digitalWrite(apinLed[i], HIGH);
        Serial.println(String(i) + " # LED ON");
        aflagLed[i] = true;
      } else {
        digitalWrite(apinLed[i], LOW);
        Serial.println(String(i) + " # LED OFF");
        aflagLed[i] = false;
      }
    }
  }
}
