int Data[8] = {13, 12, 11, 10, 9, 8, 7, 6}; //배열 순서가 바뀌면
int Select[6] = {22, 23, 24, 25, 26, 27};
int FData[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F};
int FSelect[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F};

// 16진수를 이용해서 함수없이 0~9 숫자표현,

void setup() {
  for (int i = 0; i < 8; i ++) {
    pinMode(Data[i], OUTPUT);
  }
  for (int i = 0; i < 6; i ++) {
    pinMode(Select[i], OUTPUT);
  }

}

void loop() {
  /*for (int k = 0; k < 10; k++) {
    for (int i = 0; i < 8; i ++) {
      digitalWrite(Data[i], (FData[k] >> i) & 0x01);
    }
    delay(1000);
    }

    digitalWrite(Data[0], (FData[0]>>0) & 1); // 비트연산 1의 자리와 1을 비교 같은 경우 출력
    digitalWrite(Data[1], (FData[0]>>1) & 1); // 쉬프트를 이용해 두번째 자리를 첫번째 자리로 이동
    digitalWrite(Data[2], (FData[0]>>2) & 1);
    digitalWrite(Data[3], (FData[0]>>3) & 1);
    digitalWrite(Data[4], (FData[0]>>4) & 1);
    digitalWrite(Data[5], (FData[0]>>5) & 1);
    digitalWrite(Data[6], (FData[0]>>6) & 1);
    digitalWrite(Data[7], (FData[0]>>7)] & 1);*/

  for (int i = 0; i < 6; i ++) {
    displaySelect(FSelect[5-i]);
    displayNumber(FData[i]);
    delay(1);
  }

}
