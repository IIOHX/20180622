int pinLed[8] = {2,3,4,5,6,7,8,9};


void setup() {
  for(int i = 0; i<8; i++){
    pinMode(pinLed[i], OUTPUT);
  }

}

void loop() {
  for(int j =0; j<8; j++){
    digitalWrite(pinLed[j], HIGH);
    delay(1000);
    digitalWrite(pinLed[j], LOW);
  } 
  for(int j =7; j>0; j--){
    digitalWrite(pinLed[j], HIGH);
    delay(1000);
    digitalWrite(pinLed[j], LOW);
  }
}
