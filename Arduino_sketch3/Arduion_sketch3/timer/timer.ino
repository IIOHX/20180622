#include<MsTimer2.h>

int Data[8] = {13, 12, 11, 10, 9, 8, 7, 6}; //배열 순서가 바뀌면 뒤집이서, 핀번호
int Select[6] = {22, 23, 24, 25, 26, 27};
int FData[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F};
int FSelect[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F};
long count = 45720;

void setup() {
  Serial.begin(115200);
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
  displaySelect(FSelect[5]); //루프안에서 핀번호 안씀
  displayNumber(FData[count / 3600 / 10]);
  Serial.print(count / 3600 / 10);
  delay(1);
  displaySelect(FSelect[4]); //루프안에서 핀번호 안씀
  displayNumber(FData[count / 3600 % 10]);
  Serial.print(count / 3600 % 10);
  Serial.print("시 ");
  delay(1);
  displaySelect(FSelect[3]); //루프안에서 핀번호 안씀
  displayNumber(FData[count % 3600 / 60 / 10]);
  Serial.print(count % 3600 / 60 / 10);
  delay(1);
  displaySelect(FSelect[2]); //루프안에서 핀번호 안씀
  displayNumber(FData[count % 3600 / 60 % 10]);
  Serial.print(count % 3600 / 60 % 10);
  Serial.print("분 ");
  delay(1);
  displaySelect(FSelect[1]);
  displayNumber(FData[count % 60 / 10]);
  Serial.print(count % 60 / 10);
  delay(1);
  displaySelect(FSelect[0]);
  displayNumber(FData[count % 60 % 10]);
  Serial.print(count % 60 % 10);
  Serial.println("초");
  delay(1);
  Serial.println(count);
}

void countUp() {

  if ((count / 3600 ) == 24) {
    count = 0;
  }
  count++;
}


