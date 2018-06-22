int pinLed[17] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};


void setup() {
  for(int i = 0; i<16; i++){
    pinMode(pinLed[i], OUTPUT);
  }

}

 void loop() {
  for(int j =0; j<16; j++){
    digitalWrite(pinLed[j], HIGH);
    delay(1000);
    digitalWrite(pinLed[j], LOW);
  }
 }
