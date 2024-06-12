float time;
float distance;
int trig = 13;
int echo = 12;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW); // initialize trig pin to 0
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  time = pulseIn(echo, HIGH); // pulseIn reads "echo" pin and turns it from HIGH to LOW
  distance = time/148.1; // measures 1/2 the distance in inches
  
  Serial.println(distance);
}