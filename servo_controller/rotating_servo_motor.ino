#include <Servo.h>

int servoPin = 3;
int servoPos1 = 0;
int servoPos2 = 180;

Servo myServo; // Initialise Servo Motor

void setup()
{
  myServo.attach(servoPin);
}

void loop()
{
  // Move the servo from 0 to 180 degrees
  for(servoPos1 = 0; servoPos1 <= servoPos2; servoPos1 = servoPos1 + 10)
  {
    myServo.write(servoPos1);
    delay(100);
  }
  
  // Move the servo from 180 to 0 degree
  for(servoPos1 = 180; servoPos1 >= 0; servoPos1 = servoPos1 - 10)
    {
      myServo.write(servoPos1);
      delay(100);
    }
}