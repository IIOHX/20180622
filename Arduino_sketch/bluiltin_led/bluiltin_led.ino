int led = 11;
int button = 10;
int led1 = 0;

void setup() {
 pinMode(led, OUTPUT);
 pinMode(button, INPUT);
}

void loop() {
  int value = digitalRead(button);
  if((value == HIGH) && (led1 == 0)){
    digitalWrite(led, HIGH);
    delay(1000);
    led1=1;
  } else if((value == HIGH) && (led1 == 1)){
      digitalWrite(led, LOW);
      led1 = 0;
      delay(1000);
  }
    
}
