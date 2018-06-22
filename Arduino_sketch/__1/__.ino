void setup() {
  Serial.begin(115200);
  int integer = 255;
  Serial.println(" 상수 : 255");
  Serial.println(" 16진수 Ox");
  Serial.println(integer , HEX);
  Serial.println("2진수 B");
  Serial.println(integer , BIN);
  Serial.println("8진수");
  Serial.println(integer , OCT);
  
  
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
