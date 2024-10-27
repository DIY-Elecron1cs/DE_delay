#include <DE_delay.h>

Delays Delay;  //объект

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  Delay.Mill(1000);        //ждём 1000 миллисекунд
  digitalWrite(13, LOW);
  Delay.Micr(1000000);     //ждём 1000000 микросекунд
}
