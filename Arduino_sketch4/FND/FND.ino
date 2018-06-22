#include<MsTimer2.h>

int Data[8] = {13, 12, 11, 10, 9, 8, 7, 6};
int Select[6] = {22, 23, 24, 25, 26, 27};
int FData[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F}; //0,1,2,3,4,5,6,7,8,9의 16진수
int FSelect[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F}; //1,10,100,1000,1000,10000,100000의 자리만 사용할경우의 16진수
//16진수의 값은 0x를 앞에 붙여준다.
//2진수의 값은 B를 앞에 붙여준다.
int count = 0;
void setup() {
  for (int i = 0; i < 8; i ++) {
    pinMode(Data[i], OUTPUT);
  }
  for (int i = 0; i < 6; i ++) {
    pinMode(Select[i], OUTPUT);
  }
  MsTimer2::set(1000, countUp);
  MsTimer2::start();
}

void loop() {
  /*
    //LOW인 부분만 사용이 된다.
    digitalWrite(Select[0], LOW);  //1의 자리
    digitalWrite(Select[1], HIGH);  //10의 자리
    digitalWrite(Select[2], HIGH);  //100의 자리
    digitalWrite(Select[3], HIGH);  //1000의 자리
    digitalWrite(Select[4], HIGH);  //10000의 자리
    digitalWrite(Select[5], HIGH);  //100000의 자리

    //HIGH인 부분만 불이 들어온다.
    digitalWrite(Data[0], HIGH);  //13번핀 - A연결
    digitalWrite(Data[1], HIGH);  //12번핀 - B연결
    digitalWrite(Data[2], HIGH);  //11번핀 - C연결
    digitalWrite(Data[3], HIGH);  //10번핀 - D연결
    digitalWrite(Data[4], HIGH);  //9번핀 - E연결
    digitalWrite(Data[5], HIGH);  //8번핀 - F연결
    digitalWrite(Data[6], LOW);  //7번핀 - G연결
    digitalWrite(Data[7], LOW);  //6번핀 - DP연결
  */
  /*
    //십진수 0을 FND로 표기하면 DP와 G를 제외한 나머지만 HIGH(=1)이다
    //이 값을 DP G F E D C B A순으로 0과 1을 이용하여 표기하면 00111111이다.
    //주어진 2진수를 이용하여 값을 출력
    //순서대로 하나씩만 출력되지만 속도가 빨라 눈으로 볼때는 다 같이 켜진것 처럼 보인다.
    //'FData[0] >> i'의 의미는 배열 FData의 0번째 값을 오른쪽으로 i만큼 이동(쉬프트연산)한 것이다.
    //이때 2진수로 표현하면 2의 i승을 나타낸다
    //이 값과 1을 &(AND)연산한 것을 출력
    //%(AND)연산은 (0,0),(0,1),(1,0)일 때는 0을 (1,1)일때는 1을 같는 연산이다.
    //컴퓨터는 모든 값을 2진수로 저장한다.
    //배열에 16진수를 넣었지만 2진수로 바뀐 값을 가지고 있어 연산을 할때 2진수를 기준으로 변한다.
    digitalWrite(Data[0], (FData[0] >> 0) & 1);  //'00111111'의 값중 2의 0승 부분의 값과 1을 AND연산한다.
    digitalWrite(Data[1], (FData[0] >> 1) & 1);  //'00111111'의 값중 2의 1승 부분의 값과 1을 AND연산한다.
    digitalWrite(Data[2], (FData[0] >> 2) & 1);  //'00111111'의 값중 2의 2승 부분의 값과 1을 AND연산한다.
    digitalWrite(Data[3], (FData[0] >> 3) & 1);  //'00111111'의 값중 2의 3승 부분의 값과 1을 AND연산한다.
    digitalWrite(Data[4], (FData[0] >> 4) & 1);  //'00111111'의 값중 2의 4승 부분의 값과 1을 AND연산한다.
    digitalWrite(Data[5], (FData[0] >> 5) & 1);  //'00111111'의 값중 2의 5승 부분의 값과 1을 AND연산한다.
    digitalWrite(Data[6], (FData[0] >> 6) & 1);  //'00111111'의 값중 2의 6승 부분의 값과 1을 AND연산한다.
    digitalWrite(Data[7], (FData[0] >> 7) & 1);  //'00111111'의 값중 2의 7승 부분의 값과 1을 AND연산한다.
  */
  /*
    //숫자 0을 표기
    for (int i = 0; i < 8; i ++) {
      digitalWrite(Data[i], (FData[0]>> i) & 0x01);
    }
  */
  /*
    for (int k = 0; k < 10; k++) { //0~9까지의 숫자를 표현
     for (int i = 0; i < 8; i ++) { //각 숫자를 나타내주는 A~DP를 표현
       digitalWrite(Data[i], (FData[k] >> i) & 0x01);
     }
    }
  */
  /*
    displaySelect(6);
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
    delay(1);
  */
  /*
    for (int i = 0; i < 6; i ++) {
      displaySelect(FSelect[5 - i]);
      displayNumber(FData[i + 1]);
      delay(1);
    }
  */
  /*
    //delay(1)만 사용가능하다.
    //count후 delay(1000)이 있어서 오류가 생긴것이다.
    count++;
    delay(1000);
    displaySelect(FSelect[2]);
    displayNumber(FData[count / 100]);
    delay(1);
    displaySelect(FSelect[1]);
    displayNumber(FData[count % 100 / 10]);
    delay(1);
    displaySelect(FSelect[0]);
    displayNumber(FData[count % 10]);
    delay(1);
  */
  displaySelect(FSelect[2]);
  displayNumber(FData[count / 100]);
  delay(1);
  displaySelect(FSelect[1]);
  displayNumber(FData[count % 100 / 10]);
  delay(1);
  displaySelect(FSelect[0]);
  displayNumber(FData[count % 10]);
  delay(1);
}


//숫자를 표기하는 함수
void displayNumber(int tmp) {
  for (int i = 0; i < 8; i ++) {
    digitalWrite(Data[i], (tmp >> i) & 0x01);
  }
}
//표기할 숫자의 자릿수를 표햔하는 함수
void displaySelect(int tmp) {
  for (int i = 0; i < 6; i ++) {
    digitalWrite(Select[i], (tmp >> i) & 0x01);
  }
}
void countUp() {
  count++;
}
