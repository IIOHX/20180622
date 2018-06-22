int count=0;

void setup() {
  Serial.begin(115200);

}

void loop() {
 count++;
 Serial.println(count);
 delay(10000);
}

void serialEvent(){
  char ch;
  ch = Serial.read();
  Serial.print("ch : ");
  Serial.println(ch);
}

