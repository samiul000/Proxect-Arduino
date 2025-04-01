int xPin = A1;
int yPin = A2;
int switchPin = 3;

int xVal = 512;
int yVal = 512;
int switchVal;

void setup () 
{
    Serial.begin(9600);
  	pinMode(xPin, INPUT);
  	pinMode(yPin, INPUT);
  	pinMode(switchPin, INPUT);
  
  	digitalWrite(switchPin, HIGH);
}

void loop ()
{
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  switchVal = digitalRead(switchPin);
  
  Serial.print("X value: ");
  Serial.println(xVal);
  
  Serial.print("Y value: ");
  Serial.println(yVal);
  
  Serial.print("Switch value: ");
  Serial.println(switchVal);
  
  delay(800);
  
}