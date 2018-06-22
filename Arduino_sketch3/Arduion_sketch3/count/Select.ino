void displaySelect(int tmp) {
  switch (tmp) {
    case 0 :
      digitalWrite(Select[0], HIGH);
      digitalWrite(Select[1], HIGH);
      digitalWrite(Select[2], HIGH);
      digitalWrite(Select[3], HIGH);
      digitalWrite(Select[4], HIGH);
      digitalWrite(Select[5], HIGH);
      break;
    case 1 :
      digitalWrite(Select[0], LOW);
      digitalWrite(Select[1], HIGH);
      digitalWrite(Select[2], HIGH);
      digitalWrite(Select[3], LOW);
      digitalWrite(Select[4], LOW);
      digitalWrite(Select[5], LOW);
      break;
    case 2 :
      digitalWrite(Select[0], HIGH);
      digitalWrite(Select[1], HIGH);
      digitalWrite(Select[2], LOW);
      digitalWrite(Select[3], HIGH);
      digitalWrite(Select[4], HIGH);
      digitalWrite(Select[5], LOW);
      break;
    case 3 :
      digitalWrite(Select[0], HIGH);
      digitalWrite(Select[1], HIGH);
      digitalWrite(Select[2], HIGH);
      digitalWrite(Select[3], HIGH);
      digitalWrite(Select[4], LOW);
      digitalWrite(Select[5], LOW);
      break;
    case 4 :
      digitalWrite(Select[0], LOW);
      digitalWrite(Select[1], HIGH);
      digitalWrite(Select[2], HIGH);
      digitalWrite(Select[3], LOW);
      digitalWrite(Select[4], LOW);
      digitalWrite(Select[5], HIGH);
      break;
    case 5 :
      digitalWrite(Select[0], HIGH);
      digitalWrite(Select[1], LOW);
      digitalWrite(Select[2], HIGH);
      digitalWrite(Select[3], HIGH);
      digitalWrite(Select[4], LOW);
      digitalWrite(Select[5], HIGH);
      break;
  }
}
