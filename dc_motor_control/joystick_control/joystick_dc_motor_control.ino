int speedPin = 5;
int dirPinXf = 6;
int dirPinXr = 7;

//Joystick Pins
int xPin = A2;
int yPin = A1;

int xVal, yVal; //Joystick Pin Value
int mSpeed;

void setup () 
{
    Serial.begin(9600);
  	pinMode(speedPin, OUTPUT);
  	pinMode(dirPinXf, OUTPUT);
  	pinMode(dirPinXr, OUTPUT);
  	pinMode(xPin, INPUT);
  	pinMode(yPin, INPUT);
}

void loop ()
{
  	yVal = analogRead(yPin);
  	Serial.println(yVal);
  	delay(800);
  	
    //Control Motor Speed
  	mSpeed = (255./1023.)*yVal;
  	Serial.print("Speed of Motor: ");
  	Serial.println(mSpeed);
  	analogWrite(speedPin, mSpeed);
  	
  	xVal = analogRead(xPin);
  	Serial.println(xVal);
  	
  	//Control Motor Direction
  	if(xVal == 0)
    {
      digitalWrite(dirPinXr, HIGH);
      digitalWrite(dirPinXf, LOW);
    }
  	else if(xVal == 1023)
    {
		digitalWrite(dirPinXr, LOW);
      	digitalWrite(dirPinXf, HIGH);
    }
  	else
    {
      digitalWrite(dirPinXr, LOW);
      digitalWrite(dirPinXf, LOW);
    }
  
}