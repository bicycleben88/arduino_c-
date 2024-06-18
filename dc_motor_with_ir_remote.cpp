#include <IRremote.h>
int irSensor = 11;
int irRemoteInput; 
int motorInput1 = 5;
int motorInput2 = 6;
int motorInput3 = 9;
int motorInput4 = 10;

void setup()
{
  pinMode(irSensor, OUTPUT);
  pinMode(motorInput1, OUTPUT);
  pinMode(motorInput2, OUTPUT);
  pinMode(motorInput3, OUTPUT);
  pinMode(motorInput4, OUTPUT);
  IrReceiver.begin(irSensor);
  Serial.begin(9600);
}

void loop()
{
  if(IrReceiver.decode()) {
    IrReceiver.resume();
    irRemoteInput = IrReceiver.decodedIRData.command;	
    Serial.println(irRemoteInput);
    if (irRemoteInput == 10) {
      move(1,0,1,0); // forward
    } else if (irRemoteInput == 6) {
   	  move(0,1,1,0); //right
    } else if (irRemoteInput == 8) {
   	  move(0,1,0,1); // back
    } else if (irRemoteInput == 4) {
   	  move(1,0,0,1); // left
    } else {
      move(0,0,0,0); // stop
    }
  }
}

void move(int m1a, int m1b, int m2a, int m2b) {
   digitalWrite(motorInput1, m1a);
   digitalWrite(motorInput2, m1b);
   digitalWrite(motorInput3, m2a);
   digitalWrite(motorInput4, m2b);
}