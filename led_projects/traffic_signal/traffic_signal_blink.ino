int i;
int redPin = 11;
int yelPin = 10;
int grePin = 9;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yelPin, OUTPUT);
  pinMode(grePin, OUTPUT);
}

void loop()
{
  
    digitalWrite(redPin, HIGH);
    delay(3000);
    digitalWrite(redPin, LOW);
    delay(1000);
  
  for(i = 1; i <= 3; i++)
  {
    digitalWrite(yelPin, HIGH);
    delay(1000);
    digitalWrite(yelPin, LOW);
    delay(1000);
  }
  
  	digitalWrite(grePin, HIGH);
    delay(3000);
    digitalWrite(grePin, LOW);
    delay(1000);
  
}