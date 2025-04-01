int tiltPin = 3;
int speedPin = 5;
int dirPin1 = 6;
int dirPin2 = 7;

int tiltVal;

int mSpeed = 255;

void setup () 
{
    Serial.begin(9600);
  	pinMode(tiltPin, INPUT);
  	pinMode(speedPin, OUTPUT);
  	pinMode(dirPin1, OUTPUT);
  	pinMode(dirPin2, OUTPUT);
  
  	digitalWrite(tiltPin, HIGH);
}

void loop ()
{
  	tiltVal = digitalRead(tiltPin);
  	Serial.println(tiltVal);
  	delay(800);
  
  	digitalWrite(dirPin1, HIGH);
  	digitalWrite(dirPin2, LOW);
  	
  	if(tiltVal == 0)
    {
      analogWrite(speedPin, 0);
    }
  	else if(tiltVal == 1)
    {
      analogWrite(speedPin, mSpeed);
    }
}