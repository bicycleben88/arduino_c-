#include <Servo.h>

Servo tom;

void setup()
{
  pinMode(5, OUTPUT);
  tom.attach(5);
}

void loop()
{
  tom.write(180);
  delay(2000);
  tom.write(90);
  delay(2000);
  tom.write(0);
  delay(2000);
  tom.write(90);
  delay(2000);
}