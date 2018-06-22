int led0 = 11;
int button0 = 4;
int button1 = HIGH;
int led1 = LOW;

void setup() {
 pinMode(led0, OUTPUT);
 pinMode(button0, INPUT_PULLUP);
 digitalWrite(led0, LOW);
}

void loop() {
  int value = digitalRead(button0);
  if(value == HIGH && button1 == LOW){
  if(led1 == HIGH){
      digitalWrite(led0, LOW);
      led1=LOW;
  } else if(led1 == LOW){
      digitalWrite(led0, HIGH);
      led1 = HIGH;
  } }
  button1 = value;   
}
