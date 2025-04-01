int readPr = A1;
int ledPin = 3;
int readVal;
int timer = 1000;

void setup () 
{
    Serial.begin(9600);
  	pinMode(readPr, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop ()
{
  //Read & Show Photoresistor value
  readVal = analogRead(readPr);
  Serial.println(readVal);
  delay(timer);
  
  //Control Led
  if(readVal <= 100)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}