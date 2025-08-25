// C++ code
//

#include <Servo.h>

int potPin = A0;

// ***Servo Setup***
int servoPin = 7;
int servoPos  = 90;
// Servo Position Limits
int minAngle = 60;
int maxAngle = 120;
int stepSize = 10;
Servo myServo;

// ***Button Setup***
int ForPin = 2;
int BckPin = 3;
int rightPin = 4;
int leftPin = 10;
// Right-Left Button State
bool lastRightState = HIGH;
bool lastLeftState = HIGH;

// ***Motor Setup***
int dirPinF1 = 9;
int dirPinB1 = 8;
int dirPinF2 = 11;
int dirPinB2 = 12;
int enPin1 = 5;
int enPin2 = 6;

int potVal, mSpeed, dirFval, dirBval, currentRightState, currentLeftState;

void setup()
{
  Serial.begin(9600);
  
  pinMode(potPin, INPUT);
  pinMode(servoPin, OUTPUT);
  pinMode(ForPin, INPUT);
  pinMode(BckPin, INPUT);
  pinMode(rightPin, INPUT);
  pinMode(leftPin, INPUT);
  pinMode(dirPinF1, OUTPUT);
  pinMode(dirPinB1, OUTPUT);
  pinMode(dirPinF2, OUTPUT);
  pinMode(dirPinB2, OUTPUT);
  pinMode(enPin1, OUTPUT);
  pinMode(enPin2, OUTPUT);
  
  
  digitalWrite(ForPin, HIGH);
  digitalWrite(BckPin, HIGH);
  
  digitalWrite(rightPin, HIGH);
  digitalWrite(leftPin, HIGH);
  
  myServo.attach(servoPin);
  myServo.write(servoPos);
}

void loop()
{
  potVal = analogRead(potPin);
  
  dirFval = digitalRead(ForPin);
  dirBval = digitalRead(BckPin);
  
  currentRightState = digitalRead(rightPin);
  currentLeftState = digitalRead(leftPin);
  
  mSpeed = map(potVal, 0, 1023, 0, 255);
  
  analogWrite(enPin1, mSpeed);
  analogWrite(enPin2, mSpeed);
  
  // Direction Control
  if(dirFval == 1){
    digitalWrite(dirPinF1, HIGH);
    digitalWrite(dirPinB1, LOW);
    digitalWrite(dirPinF2, HIGH);
    digitalWrite(dirPinB2, LOW);
  }
  else if(dirBval == 1){
    digitalWrite(dirPinF1, LOW);
    digitalWrite(dirPinB1, HIGH);
    digitalWrite(dirPinF2, LOW);
    digitalWrite(dirPinB2, HIGH);
  }
  else{
    digitalWrite(dirPinF1, HIGH);
    digitalWrite(dirPinB1, HIGH);
    digitalWrite(dirPinF2, HIGH);
    digitalWrite(dirPinB2, HIGH);
  }
  
  
  // Right - Left Control
  // Servo Turning Right
  if (currentRightState == LOW && lastRightState == HIGH) {
    servoPos -= stepSize;
    if (servoPos < minAngle){
      servoPos = minAngle;
    }
    myServo.write(servoPos);
    delay(100);
  }

  // Servo Turning Left
  if (currentLeftState == LOW && lastLeftState == HIGH) {
    servoPos += stepSize;
    if (servoPos > maxAngle){
      servoPos = maxAngle;
    }
    myServo.write(servoPos);
    delay(100); 
  }

  // Update Last States
  lastRightState = currentRightState;
  lastLeftState = currentLeftState;

  Serial.println("************************");
  Serial.print("Potentio Value: ");
  Serial.println(potVal);
  Serial.print("Forward Button: ");
  Serial.println(dirFval);
  Serial.print("Backward Button: ");
  Serial.println(dirBval);
  Serial.print("Right Button: ");
  Serial.println(currentRightState);
  Serial.print("Left Button: ");
  Serial.println(currentLeftState);
  Serial.print("Servo Angle: ");
  Serial.println(servoPos);
  Serial.println("************************");
  delay(1000);
  
}