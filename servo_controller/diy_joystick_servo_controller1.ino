#include <Servo.h>

int xPin = A1;
int yPin = A2;
int switchPin = 3;
int servoPinX = 5;
int servoPinY = 6;

int timer = 800;

int xVal, yVal, switchVal;
int servoPosX, servoPosY;

Servo myServoX, myServoY;

void setup () 
{
    Serial.begin(9600);
  	pinMode(xPin, INPUT);
  	pinMode(yPin, INPUT);
  	pinMode(switchPin, INPUT);
  	
  	myServoX.attach(servoPinX);
  	myServoY.attach(servoPinY);
  
  	digitalWrite(switchPin, HIGH);
}

void loop ()
{
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  switchVal = digitalRead(switchPin);
  
  Serial.print("X value: ");
  Serial.println(xVal);
  
  Serial.print("Y value: ");
  Serial.println(yVal);
  
  Serial.print("Switch value: ");
  Serial.println(switchVal);
  
  delay(timer);
  
  servoPosX = (180./1023.)*xVal;
  servoPosY = (180./1023.)*yVal;
  
  myServoX.write(servoPosX);
  myServoY.write(servoPosY);
  
  Serial.print("X Servo-Position = ");
  Serial.println(servoPosX);
  Serial.print("Y Servo-Position = ");
  Serial.println(servoPosY);
  delay(timer);
  
}