#include <IRremote.hpp>  // Make sure this is installed correctly

int irPin = 9;
IRrecv IR(irPin);
IRData cmd;
String myCom;

// Motor Pins
int speedPin = 5;
int dirF = 4;
int dirR = 3;
int mSpeed = 0;

// Led Pin
int grePin = 10;

void setup()
{
  Serial.begin(9600);
  IR.begin(irPin);
  pinMode(speedPin, OUTPUT);
  pinMode(dirF, OUTPUT);
  pinMode(dirR, OUTPUT);
  pinMode(grePin, OUTPUT);
  
  digitalWrite(dirF, LOW);
  digitalWrite(dirR, LOW);
}

void loop()
{
  if (IR.decode()) 
  {
    Serial.println(IR.decodedIRData.command, HEX);
    
    if(IR.decodedIRData.command == 0)
  	{
    	myCom = "Power";
    	Serial.println(myCom);
  	}
    else if(IR.decodedIRData.command == 2)
  	{
    	myCom = "Stop";
    	Serial.println(myCom);
  	}
    else if(IR.decodedIRData.command == 4)
    {
      myCom = "Reverse";
      Serial.println(myCom);
    }
    else if(IR.decodedIRData.command == 6)
    {
      myCom = "Forward";
      Serial.println(myCom);
    }
    else if(IR.decodedIRData.command == 0xA)
    {
      myCom = "Speed Up";
      Serial.println(myCom);
    }
    else if(IR.decodedIRData.command == 8)
    {
      myCom = "Speed Down";
      Serial.println(myCom);
    }
    
    
    IR.resume();  // Continue receiving
  }
  
  if(myCom == "Power")
  {
    digitalWrite(grePin, HIGH);
    digitalWrite(dirF, HIGH);
  	digitalWrite(dirR, LOW);
  	analogWrite(speedPin, mSpeed);
  }
  else if(myCom == "Stop")
  {
    digitalWrite(grePin, LOW);
    digitalWrite(dirF, HIGH);
  	digitalWrite(dirR, LOW);
  	analogWrite(speedPin, 0);
  }
  else if(myCom == "Forward")
  {
    digitalWrite(dirF, HIGH);
    digitalWrite(dirR, LOW);
    analogWrite(speedPin, mSpeed);
  }
  else if(myCom == "Reverse")
  {
    digitalWrite(dirF, LOW);
    digitalWrite(dirR, HIGH);
    analogWrite(speedPin, mSpeed);
  }
  else if(myCom == "Speed Up")
  {
    mSpeed = mSpeed + 5;
    
    if( mSpeed > 255)
    {
      mSpeed = 255;
    }
    
    analogWrite(speedPin, mSpeed);
  }
  else if(myCom == "Speed Down")
  {
    mSpeed = mSpeed - 5;
    
    if( mSpeed < 0)
    {
      mSpeed = 0;
    }
    
    analogWrite(speedPin, mSpeed);
  }
  
  
  
}
