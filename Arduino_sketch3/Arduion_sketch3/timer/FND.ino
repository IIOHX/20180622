void displayNumber(int tmp) {
  for (int i = 0; i < 8; i ++) {
    digitalWrite(Data[i], (tmp >> i) & 0x01);
  }
}
void displaySelect(int tmp) {
  for (int i = 0; i < 6; i ++) {
    digitalWrite(Select[i], (tmp >> i) & 0x01);
  }
}
