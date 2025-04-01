#include <Servo.h>

int servoPin = 3;
int prPin = A1;

int servoPos;
int prVal;

Servo myServo; //Interact with servo motor

void setup () 
{
    Serial.begin(9600);
  	myServo.attach(servoPin);
  	pinMode(prPin, INPUT);
}

void loop ()
{
  prVal = analogRead(prPin);
  
  servoPos = 1017*(180./673.) - prVal*(180./673.);
  
  if(prVal >= 1017)
  {
    servoPos = 0;
  }
  else if(prVal <= 344)
  {
    servoPos = 180;
  }
  
  myServo.write(servoPos);
  
  Serial.println(servoPos);
}