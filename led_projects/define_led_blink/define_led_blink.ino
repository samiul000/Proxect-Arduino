int i;
int redPin = 11;
int yelPin = 10;
int timer = 800;
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yelPin, OUTPUT);
}

void loop()
{
  for(i = 1; i <= 3; i++)
  {
    digitalWrite(yelPin, HIGH);
    delay(timer);
    digitalWrite(yelPin, LOW);
    delay(timer);
  }
  
  for(i = 1; i <= 5; i++)
  {
    digitalWrite(redPin, HIGH);
    delay(timer);
    digitalWrite(redPin, LOW);
    delay(timer);
  }
  
  delay(timer);
}