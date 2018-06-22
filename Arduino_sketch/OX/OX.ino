int led = 3;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);

}

void loop() {

}

void serialEvent(){
  char ch;
  ch = Serial.read();
 if(ch == 'o' || ch == 'O'){
    Serial.println("LED를 킵니다");
    digitalWrite(led, HIGH);
  } else if(ch == 'x' || ch == 'X'){
     Serial.println("LED를 끕니다");
    digitalWrite(led, LOW);
  } else{
    Serial.println("잘못된 입력입니다.");
  }
}

