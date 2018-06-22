

void setup() {
  Serial.begin(115200);
  int tmp = 123;

  Serial.println("123의 10진수는 : " String(tmp));
  Serial.print("123의 2진수는 :");
  Serial.println(tmp. BIN); // 123을 2진수로 바꿔줌  = BIN

  tmp = tmp <<2; //2진수를 기준으로 왼쪽으로 숫자만큼 자리 이동 >> 경우 반대, 수가 줄어듦

}

void loop() {
  // put your main code here, to run repeatedly:

}
