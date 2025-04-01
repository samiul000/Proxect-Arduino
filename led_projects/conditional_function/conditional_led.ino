int readPin = A0;
int redPin = 8;
int yelPin = 10;
int grePin = 12;
int readVal;
float v2 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(readPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yelPin, OUTPUT);
  pinMode(grePin, OUTPUT);
}

void loop()
{
  readVal = analogRead(readPin);
  v2 = (5./1023.)*readVal;
  Serial.println(v2);
  
  //Red Led
  if(v2 <= 5 && v2 >= 4)
  {
    digitalWrite(redPin, HIGH);
  }
  else if (v2 < 4)
  {
    digitalWrite(redPin, LOW);
  }
  
  //Yellow Led
  if(v2 >= 3 && v2 < 4)
  {
    digitalWrite(yelPin, HIGH);
  }
  else if(v2 < 3 || v2 >= 4)
  {
    digitalWrite(yelPin, LOW);
  }
  
  //Green Led
  if(v2 < 3)
  {
    digitalWrite(grePin, HIGH);
  }
  else if(v2 >3)
  {
    digitalWrite(grePin, LOW);
  }
  
  
  delay(800);
}