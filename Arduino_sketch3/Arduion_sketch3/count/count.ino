int Data[8] = {13, 12, 11, 10, 9, 8, 7, 6}; //배열 순서가 바뀌면, 자리수에 따른 수(?
int Select[6] = {22, 23, 24, 25, 26, 27}; // 자리수

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
 
 /* displaySelect(6);
  displayNumber(0);
  delay(1);

  displaySelect(5);
  displayNumber(1);
  delay(1);

  displaySelect(4);
  displayNumber(2);
  delay(1);

  displaySelect(3);
  displayNumber(3);
  delay(1);

  displaySelect(2);
  displayNumber(4);
  delay(1);

  displaySelect(1);
  displayNumber(5);
  delay(1);

  displaySelect(0);
  displayNumber(6);
  delay(1); */

 /* for (int i = 0; i < 6; i++) { //6가지 경우를 따로 설정
    for (int j = 0; j < 6; j++) { //숫자 하나를 띄울때 하나만 LOW 나머지는 HIGH 여야함
      digitalWrite(Select[j], HIGH);
    }
    digitalWrite(Select[5 - i], LOW); // 순서 변환 5-i , 원하는 부분한 LOW
    displayNumber(i+1); // 원하는 부분에 원하는 숫자 +1 출력
    delay(1); // 너무 빨라도 안되고, 너무 느려도 안되고 한번에 보일정도로만 
  }*/

}


