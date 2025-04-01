//Motor Pins
int speedPin = 5;
int dirPinXf = 6;
int dirPinXr = 7;

//Buttons Pin
int buttonPin1 = 9;
int buttonPin2 = 10;

int timer = 500;

int buttonVal1, buttonVal2;
int mSpeed = 0;

void setup () 
{
    Serial.begin(9600);
  	pinMode(speedPin, OUTPUT);
  	pinMode(dirPinXf, OUTPUT);
  	pinMode(dirPinXr, OUTPUT);
  	pinMode(buttonPin1, INPUT);
  	pinMode(buttonPin2, INPUT);
  
  	//Set button values to 1
    digitalWrite(buttonPin1, HIGH);
    digitalWrite(buttonPin2, HIGH);
  	
}

void loop ()
{
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.print("Button 1 = ");
  Serial.println(buttonVal1);
  delay(timer);
  Serial.print("Button 2 = ");
  Serial.println(buttonVal2);
  delay(timer);
  
  //Increase, Decrease speed
  if(buttonVal1 == 0)
  {
    mSpeed = mSpeed + 5;
    Serial.println(mSpeed);
  }
  else if(buttonVal2 == 0)
  {
    mSpeed = mSpeed - 5;
    Serial.println(mSpeed);
  }
  
  //Set Highest, Lowest value
  if(mSpeed > 255)
  {
    mSpeed = 255;
  }
  else if(mSpeed < -255)
  {
    mSpeed = -255;
  }
  
  //Set motor spin direction
  if(mSpeed > 0)
  {
    digitalWrite(dirPinXf, HIGH);
    digitalWrite(dirPinXr, LOW);
  }
  else if(mSpeed < 0)
  {
    digitalWrite(dirPinXf, LOW);
    digitalWrite(dirPinXr, HIGH);
  }
  
  analogWrite(speedPin, abs(mSpeed));
  
}