int led = 3;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);

}

void loop() {
  char ch;
 if(Serial.available()){
  ch = Serial.read();}
 if(ch == 'O'){
    Serial.println("LED를 킵니다");
    digitalWrite(led, HIGH);
  } else if(ch == 'X'){
     Serial.println("LED를 끕니다");
    digitalWrite(led, LOW);
  } else{
    Serial.println("잘못된 입력입니다.");
   // break()
  }
    delay(1000);
}


