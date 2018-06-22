int btn[8] = {4,5,6,7,8,9,10,11};

void setup() {
 Serial.begin(115200);
 for(int i=0; i<8; i++){
  pinMode(btn[i], INPUT);
 }
}

void loop() {
  int value = 8;
    for(int k=0; k<8; k++){
      if(digitalRead(btn[k]) == LOW){
        value = k;
    } 
    }
    if(value !=8){
      Serial.print(btn[value]);
      Serial.println("번째 버튼이 눌렸습니다");
 }

}
