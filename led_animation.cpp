// C++ code
//
int counter;
int animationSpeed = 0;
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  animationSpeed = 300;
  for (counter = 0; counter < 10; ++counter) {
    // Serial.print(animationSpeed);
    digitalWrite(12, HIGH);
    delay(animationSpeed); // Wait for animationSpeed millisecond(s)
    digitalWrite(12, LOW);
    delay(animationSpeed); // Wait for animationSpeed millisecond(s)
    digitalWrite(11,HIGH);
    delay(animationSpeed); // Wait for animationSpeed millisecond(s)
    digitalWrite(11, LOW);
    delay(animationSpeed); // Wait for animationSpeed millisecond(s)
    digitalWrite(10, HIGH);
    delay(animationSpeed); // Wait for animationSpeed millisecond(s)
    digitalWrite(10, LOW);
    delay(animationSpeed); // Wait for animationSpeed millisecond(s)
  }
}