int ledState = 0; //Led is off from starting
int readPin = 9;  //Read Push-button value
int ledPin = 11;
int buttonNew;
int buttonOld = 1;
int readVal;
int timer = 100;

void setup () 
{
    Serial.begin(9600);
  	pinMode(readPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop ()
{
  readVal = digitalRead(readPin);
  Serial.println(readVal);
  
  buttonNew = readVal;
  
  if(buttonOld == 0 && buttonNew == 1)
  {
    if(ledState == 0)
    {
      digitalWrite(ledPin, HIGH);
      ledState = 1;
    }
    else{
      digitalWrite(ledPin, LOW);
      ledState = 0;
    }
  }
  
  buttonOld = buttonNew;
  
  
  delay(timer);
}