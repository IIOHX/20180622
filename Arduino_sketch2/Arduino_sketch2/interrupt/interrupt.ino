int pinLed = 13 ;
int pinInterrupt = 0;
int state = LOW;

void setup() {
  pinMode(pinLed, OUTPUT);
  attachInterrupt(pinInterrupt, blink, CHANGE); // FALLING 혹은 RISING F+R = CHANGE //bling : state를 반전시켜서 자기자신에게 저장시킴

}

void loop() {

}

void blink() {
  state = !state; //state가 LOW 일때 state 는 HIGH
  digitalWrite(pinLed, state); // LED ON or OFF
}

