int Data[8] = {13, 12, 11, 10, 9, 8, 7, 6}; //배열 순서가 바뀌면
int Select[6] = {22, 23, 24, 25, 26, 27};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(Data[i], OUTPUT);
  }
  for (int i = 0; i < 6; i++) {
    pinMode(Select[i], OUTPUT);
    digitalWrite(Select[i], LOW);
  }
}


void loop() {
  digitalWrite(Select[0], HIGH);
  digitalWrite(Select[1], LOW);
  digitalWrite(Select[2], LOW);
  digitalWrite(Select[3], LOW);
  digitalWrite(Select[4], LOW);
  digitalWrite(Select[5], LOW);

//숫자 0
  digitalWrite(Data[0], HIGH); //코드 안의 순서도 바뀐다
  digitalWrite(Data[1], HIGH);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], HIGH);
  digitalWrite(Data[4], HIGH);
  digitalWrite(Data[5], HIGH);
  digitalWrite(Data[6], LOW);
  digitalWrite(Data[7], LOW);

  delay(1000);

 //숫자 1
  digitalWrite(Data[0], LOW);
  digitalWrite(Data[1], HIGH);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], LOW);
  digitalWrite(Data[4], LOW);
  digitalWrite(Data[5], LOW);
  digitalWrite(Data[6], LOW);
  digitalWrite(Data[7], LOW);
   delay(1000);
 //숫자2  
  digitalWrite(Data[0], HIGH);
  digitalWrite(Data[1], HIGH);
  digitalWrite(Data[2], LOW);
  digitalWrite(Data[3], HIGH);
  digitalWrite(Data[4], HIGH);
  digitalWrite(Data[5], LOW);
  digitalWrite(Data[6], HIGH);
  digitalWrite(Data[7], LOW);  //. 를 의미함
  delay(1000);
 //숫자3
   digitalWrite(Data[0], HIGH);
  digitalWrite(Data[1], HIGH);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], HIGH);
  digitalWrite(Data[4], LOW);
  digitalWrite(Data[5], LOW);
  digitalWrite(Data[6], HIGH);
  digitalWrite(Data[7], LOW); 
  delay(1000);
 //숫자 4
  digitalWrite(Data[0], LOW);
  digitalWrite(Data[1], HIGH);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], LOW);
  digitalWrite(Data[4], LOW);
  digitalWrite(Data[5], HIGH);
  digitalWrite(Data[6], HIGH);
  digitalWrite(Data[7], LOW);
  delay(1000);
 //숫자 5
    digitalWrite(Data[0], HIGH);
  digitalWrite(Data[1], LOW);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], HIGH);
  digitalWrite(Data[4], LOW);
  digitalWrite(Data[5], HIGH);
  digitalWrite(Data[6], HIGH);
  digitalWrite(Data[7], LOW);
  delay(1000);
  //숫자 6
      digitalWrite(Data[0], LOW);
  digitalWrite(Data[1], LOW);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], HIGH);
  digitalWrite(Data[4], HIGH);
  digitalWrite(Data[5], HIGH);
  digitalWrite(Data[6], HIGH);
  digitalWrite(Data[7], LOW);
  delay(1000);
//숫자 7
     digitalWrite(Data[0], HIGH);
  digitalWrite(Data[1], HIGH);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], LOW);
  digitalWrite(Data[4], LOW);
  digitalWrite(Data[5], LOW);
  digitalWrite(Data[6], LOW);
  digitalWrite(Data[7], LOW); 
  delay(1000);
//숫자8
   digitalWrite(Data[0], HIGH);
  digitalWrite(Data[1], HIGH);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], HIGH);
  digitalWrite(Data[4], HIGH);
  digitalWrite(Data[5], HIGH);
  digitalWrite(Data[6], HIGH);
  digitalWrite(Data[7], LOW);
  delay(1000);  
//숫자9
  digitalWrite(Data[0], HIGH);
  digitalWrite(Data[1], HIGH);
  digitalWrite(Data[2], HIGH);
  digitalWrite(Data[3], LOW);
  digitalWrite(Data[4], LOW);
  digitalWrite(Data[5], HIGH);
  digitalWrite(Data[6], HIGH);
  digitalWrite(Data[7], LOW); 
  delay(1000);




}
