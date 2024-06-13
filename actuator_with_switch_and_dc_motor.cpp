int motorpin1 = 5;
int motorpin2 = 6;

void setup()
{
  pinMode(motorpin1, OUTPUT);
  pinMode(motorpin2, OUTPUT);
}

void loop()
{
  digitalWrite(motorpin1, HIGH);
  digitalWrite(motorpin2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(motorpin1, LOW);
  digitalWrite(motorpin2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(motorpin1, LOW);
  digitalWrite(motorpin2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}