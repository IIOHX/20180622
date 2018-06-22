int pinLed[16] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};


void setup() {
  for(int i = 0; i<16; i++){
    pinMode(pinLed[i], OUTPUT);
  }

}

void loop() {
  digitalWrite(pinLed[3], HIGH);
  digitalWrite(pinLed[7], HIGH);
  for(int j = 11; j<16; j++){
    digitalWrite(pinLed[j], HIGH);
  } 
    delay(1000);
     for(int i = 0; i<16; i++){
    digitalWrite(pinLed[i], LOW); 
    digitalWrite(pinLed[0], HIGH);
    digitalWrite(pinLed[3], HIGH);
    digitalWrite(pinLed[4], HIGH);
    digitalWrite(pinLed[7], HIGH);
    digitalWrite(pinLed[8], HIGH);
   for(int k =11; k<16; k++){
    digitalWrite(pinLed[k], HIGH);
  }
    delay(1000); //O
       for(int i = 0; i<16; i++){
    digitalWrite(pinLed[i], LOW);
  }
   digitalWrite(pinLed[0], HIGH);
   digitalWrite(pinLed[3], HIGH);
   digitalWrite(pinLed[4], HIGH);
   digitalWrite(pinLed[7], HIGH);
   digitalWrite(pinLed[8], HIGH);
   digitalWrite(pinLed[11], HIGH);
   digitalWrite(pinLed[13], HIGH);
   digitalWrite(pinLed[14], HIGH);
   delay(1000);
       for(int i = 0; i<16; i++){
    digitalWrite(pinLed[i], LOW);
  }
}
