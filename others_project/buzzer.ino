int readPin = A1;
int buzPin = 3;
float readVal;
float V2;
int timer = 750;

void setup () 
{
   Serial.begin(9600);
   pinMode(readPin, INPUT);
   pinMode(buzPin, OUTPUT);
}

void loop ()
{
  //Potentiometer Programme
  readVal = analogRead(readPin);
  V2 = readVal;
  Serial.println(V2);
  
  //Buzzer Programme
  if(V2 > 1000)
  {
    digitalWrite(buzPin, HIGH);
  }
  else
  {
    digitalWrite(buzPin, LOW);
  }
  
  delay(timer);
}