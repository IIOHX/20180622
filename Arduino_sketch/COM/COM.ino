int pinLed[16] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};


void setup() {
  for(int i = 0; i<16; i++){
    pinMode(pinLed[i], OUTPUT);
  }

}

void loop() {
  for(int j = 0; j<4; j++){
    digitalWrite(pinLed[j], HIGH);
  } 
    digitalWrite(pinLed[7], HIGH);
   for(int j = 11; j<16; j++){
    digitalWrite(pinLed[j], HIGH);
  }
    delay(1000);
     for(int i = 0; i<16; i++){
    digitalWrite(pinLed[i], LOW);
  }
   
   for(int k = 0; k<5; k++){
    digitalWrite(pinLed[k], HIGH);
  } 
    digitalWrite(pinLed[7], HIGH);
    digitalWrite(pinLed[8], HIGH);
   for(int k = 11; k<16; k++){
    digitalWrite(pinLed[k], HIGH);
  }
    delay(1000); //O
       for(int i = 0; i<16; i++){
    digitalWrite(pinLed[i], LOW);
  }
    
    digitalWrite(pinLed[0], HIGH);
      for(int m =3; m<9; m++){
    digitalWrite(pinLed[m], HIGH);
  } 
    digitalWrite(pinLed[11], HIGH);
    digitalWrite(pinLed[12], HIGH);
    digitalWrite(pinLed[15], HIGH);
    delay(1000);
       for(int i = 0; i<16; i++){
    digitalWrite(pinLed[i], LOW);
  }
}
