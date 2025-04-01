int tiltPin = 3;
int grePin = 5;
int redPin = 6;
int tiltVal;

void setup () 
{
    Serial.begin(9600);
  	pinMode(tiltPin, INPUT);
  	pinMode(grePin, OUTPUT);
  	pinMode(redPin, OUTPUT);
  
  	digitalWrite(tiltPin, HIGH);
}

void loop ()
{
  	tiltVal = digitalRead(tiltPin);
  	Serial.println(tiltVal);
  	delay(800);
  	
  	if(tiltVal == 1)
    {
      digitalWrite(grePin, HIGH);
      digitalWrite(redPin, LOW);
    }
  	else if(tiltVal == 0)
    {
      digitalWrite(grePin, LOW);
      digitalWrite(redPin, HIGH);
    }
}