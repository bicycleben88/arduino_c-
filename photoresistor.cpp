int powerInBase10;
float voltage;

void setup()
{
   pinMode(A0, INPUT);
   Serial.begin(9600);
}

void loop()
{
   powerInBase10 = analogRead(A0);
   voltage = powerInBase10 * 5;
   voltage = voltage / 1024;
   Serial.println(voltage);
}