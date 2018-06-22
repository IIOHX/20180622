#include<MsTimer2.h>

int Data[8] = {13, 12, 11, 10, 9, 8, 7, 6}; //배열 순서가 바뀌면 뒤집이서, 핀번호
int Select[6] = {22, 23, 24, 25, 26, 27};
int FData[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F};
int FSelect[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F};
int Calendar_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
long count = 49740;
int Cyear = 2018;
int Cmonth = 6;
int Cday = 22;


void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 8; i ++) {
    pinMode(Data[i], OUTPUT);
  }
  for (int i = 0; i < 6; i ++) {
    pinMode(Select[i], OUTPUT);
  }
  attachInterrupt(0, calendar, FALLING);
  attachInterrupt(1, timer, FALLING);
  MsTimer2::set(1000, countUp);
  MsTimer2::start();
}

void loop() {

}

void timer() {
  displaySelect(FSelect[5]);
  displayNumber(FData[count / 3600 / 10]);
  delay(1);
  displaySelect(FSelect[4]);
  displayNumber(FData[count / 3600 % 10]);
  delay(1);
  displaySelect(FSelect[3]);
  displayNumber(FData[count % 3600 / 60 / 10]);
  delay(1);
  displaySelect(FSelect[2]);
  displayNumber(FData[count % 3600 / 60 % 10]);
  delay(1);
  displaySelect(FSelect[1]);
  displayNumber(FData[count % 60 / 10]);
  delay(1);
  displaySelect(FSelect[0]);
  displayNumber(FData[count % 60 % 10]);
  delay(1);
}

void calendar() {
  displaySelect(FSelect[5]);
  displayNumber(FData[Cyear % 100 / 10]);
  delay(1);
  displaySelect(FSelect[4]);
  displayNumber(FData[Cyear % 100 % 10]);
  delay(1);
  displaySelect(FSelect[3]);
  displayNumber(FData[Cmonth / 10]);
  delay(1);
  displaySelect(FSelect[2]);
  displayNumber(FData[Cmonth % 10]);
  delay(1);
  displaySelect(FSelect[1]);
  displayNumber(FData[Cday / 10]);
  delay(1);
  displaySelect(FSelect[0]);
  displayNumber(FData[Cday % 10]);
  delay(1);
}

void countUp() {
  if ((count / 3600 ) == 24) {
    count = 0;
    Cday++;
  }
  if (Cday == Calendar_month[Cmonth - 1]) {
    Cmonth++;
  }
  if (Cmonth == 12) {
    Cyear++;

    if (((Cyear / 4) == 0 ) && ((Cyear / 100) == 0) && ((Cyear / 400) == 0)) {
      Calendar_month[1] = 29;
    } else if (((Cyear / 4) == 0 ) && ((Cyear / 100) != 0)) {
      Calendar_month[1] = 29;
    }    else if ((Cyear / 4) == 0 ) {
      Calendar_month[1] = 28;
    }
  }
  count++;
}
