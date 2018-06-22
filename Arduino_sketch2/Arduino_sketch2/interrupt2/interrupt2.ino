int led[4] = {13,12,11,10};

bool flagLed = false;

void setup() {
 for(int i=0; i<4; i++){
  pinMode(led[i], OUTPUT);
 }
 attachInterrupt(0, BlinkUp, FALLING); //함수 선언
 attachInterrupt(1, BlinkDown, RISING); //함수 선언
}

void loop() {
  if(flagLed == false){
    for(int i =0; i<4; i++){
      digitalWrite(led[i], HIGH);
      delay(100);
      digitalWrite(led[i], LOW);
    }
  } else{
    for(int i =3; i>=0; i--){
      digitalWrite(led[i], HIGH);
      delay(100);
      digitalWrite(led[i], LOW);
    }
  }

}

void BlinkUp(){
  flagLed = false;
}
void BlinkDown(){
  flagLed = true;
}

