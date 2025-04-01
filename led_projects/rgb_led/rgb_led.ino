int grePin = 9;
int bluPin = 10;
int redPin = 11;
int rgbTimer = 1000;
int timer = 750;

void setup () 
{
   pinMode(grePin, OUTPUT);
   pinMode(bluPin, OUTPUT);
   pinMode(redPin, OUTPUT);
}

void loop ()
{
  //cyan
  analogWrite(grePin, 128);
  analogWrite(bluPin, 128);
  analogWrite(redPin, 0);
  delay(rgbTimer);
  
  //magenta
  analogWrite(grePin, 0);
  analogWrite(bluPin, 128);
  analogWrite(redPin, 128);
  delay(rgbTimer);
  
  //yellow
  analogWrite(grePin, 128);
  analogWrite(bluPin, 0);
  analogWrite(redPin, 128);
  delay(rgbTimer);
  
  //white
  analogWrite(grePin, 255);
  analogWrite(bluPin, 255);
  analogWrite(redPin, 255);
  delay(rgbTimer);
  
  delay(timer);
}