int led[2] = {13, 12};

bool flagLed[2] = {false,};

int count =0;


int state = LOW;

void setup() {
  Serial.begin(115200);
  pinMode(led[0] , OUTPUT);
  pinMode(led[1] , OUTPUT);

  attachInterrupt(3, blink01, FALLING);
  attachInterrupt(4, blink02, RISING);
}

void loop() {
  count++;
  Serial.println("count : " + String(count));
  delay(5000);

}

void blink01(){
  flagLed[0] =!flagLed[0];
  digitalWrite(led[0], flagLed[0]);
  Serial.println("Switch 20 Pushed");
}

void blink02(){
    flagLed[1] =!flagLed[1];
  digitalWrite(led[1], flagLed[1]);
    Serial.println("Switch 19 Pushed");
}

