int pinLed = 12;
int pinSwitch = 3;

bool flagLed = false;


void setup() {
  Serial.begin(115200);
  pinMode(pinLed, OUTPUT);
  pinMode(pinSwitch, INPUT);
  Serial.println("SWITCH/LED Application");
}

void loop() {
  if (!digitalRead(pinSwitch)) {
    if (flagLed == false) {
      digitalWrite(pinLed, HIGH);
      Serial.println("LED ON");
      flagLed = true;
    } else {
      digitalWrite(pinLed, LOW);
      Serial.println("LED OFF");
      flagLed = false;
    }
  }
  delay(500);
  }
