int pinLed[8] = {2,3,4,5,6,7,8,9};

void setup() {
  Serial.begin(9600);
}

void loop() {
  String ch;
  if(Serial.available()){
    ch = Serial.readString();
    Serial.println("str : "+ (ch));
  }

}
