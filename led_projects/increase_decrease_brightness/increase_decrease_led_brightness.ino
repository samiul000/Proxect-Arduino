int buttonPin1 = 3;
int buttonPin2 = 5;
int ledPin = 9;
int buzzPin = 10;
int ledBright = 0;

int buttonVal1;
int buttonVal2;

void setup () 
{
    Serial.begin(9600);
  	pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(buzzPin, OUTPUT);
}

void loop ()
{
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  
  Serial.print("Button 1 = ");
  Serial.println(buttonVal1);
  
  Serial.print("Button 2 = ");
  Serial.println(buttonVal2);
  
  delay(500);
  
  //Led Control
  if(buttonVal1 == 0)
  {
    ledBright = ledBright + 5;
    Serial.println(ledBright);
  }
  else if(buttonVal2 == 0)
  {
    ledBright = ledBright - 5;
    Serial.println(ledBright);
  }
  
  if(ledBright > 255)
  {
    ledBright = 255;
    digitalWrite(buzzPin, HIGH);
    delay(500);
    digitalWrite(buzzPin, LOW);
  }
  else if(ledBright < 0)
  {
    ledBright = 0;
    digitalWrite(buzzPin, HIGH);
    delay(500);
    digitalWrite(buzzPin, LOW);
  }
  
  analogWrite(ledPin, ledBright);
}