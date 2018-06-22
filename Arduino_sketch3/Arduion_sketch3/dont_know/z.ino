void displayNumber(int tmp) {
  switch (tmp) {
    case 0 :
      digitalWrite(Data[0], HIGH);
      digitalWrite(Data[1], HIGH);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], HIGH);
      digitalWrite(Data[4], HIGH);
      digitalWrite(Data[5], HIGH);
      digitalWrite(Data[6], LOW);
      digitalWrite(Data[7], LOW);
      break;
    case 1 :
      digitalWrite(Data[0], LOW);
      digitalWrite(Data[1], HIGH);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], LOW);
      digitalWrite(Data[4], LOW);
      digitalWrite(Data[5], LOW);
      digitalWrite(Data[6], LOW);
      digitalWrite(Data[7], LOW);
      break;
    case 2 :
      digitalWrite(Data[0], HIGH);
      digitalWrite(Data[1], HIGH);
      digitalWrite(Data[2], LOW);
      digitalWrite(Data[3], HIGH);
      digitalWrite(Data[4], HIGH);
      digitalWrite(Data[5], LOW);
      digitalWrite(Data[6], HIGH);
      digitalWrite(Data[7], LOW);
      break;
    case 3 :
      digitalWrite(Data[0], HIGH);
      digitalWrite(Data[1], HIGH);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], HIGH);
      digitalWrite(Data[4], LOW);
      digitalWrite(Data[5], LOW);
      digitalWrite(Data[6], HIGH);
      digitalWrite(Data[7], LOW);
      break;

    case 4 :
      digitalWrite(Data[0], LOW);
      digitalWrite(Data[1], HIGH);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], LOW);
      digitalWrite(Data[4], LOW);
      digitalWrite(Data[5], HIGH);
      digitalWrite(Data[6], HIGH);
      digitalWrite(Data[7], LOW);
      break;
    case 5 :
      digitalWrite(Data[0], HIGH);
      digitalWrite(Data[1], LOW);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], HIGH);
      digitalWrite(Data[4], LOW);
      digitalWrite(Data[5], HIGH);
      digitalWrite(Data[6], HIGH);
      digitalWrite(Data[7], LOW);
      break;
    case 6 :
      digitalWrite(Data[0], LOW);
      digitalWrite(Data[1], LOW);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], HIGH);
      digitalWrite(Data[4], HIGH);
      digitalWrite(Data[5], HIGH);
      digitalWrite(Data[6], HIGH);
      digitalWrite(Data[7], LOW);
      break;

    case 7 :
      digitalWrite(Data[0], HIGH);
      digitalWrite(Data[1], HIGH);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], LOW);
      digitalWrite(Data[4], LOW);
      digitalWrite(Data[5], LOW);
      digitalWrite(Data[6], LOW);
      digitalWrite(Data[7], LOW);
      break;
    case 8 :
      digitalWrite(Data[0], HIGH);
      digitalWrite(Data[1], HIGH);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], HIGH);
      digitalWrite(Data[4], HIGH);
      digitalWrite(Data[5], HIGH);
      digitalWrite(Data[6], HIGH);
      digitalWrite(Data[7], LOW);
      break;
    case 9:
      digitalWrite(Data[0], HIGH);
      digitalWrite(Data[1], HIGH);
      digitalWrite(Data[2], HIGH);
      digitalWrite(Data[3], LOW);
      digitalWrite(Data[4], LOW);
      digitalWrite(Data[5], HIGH);
      digitalWrite(Data[6], HIGH);
      digitalWrite(Data[7], LOW);
      break;
  }
}
