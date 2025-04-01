int i;
int redPin = 11;

String msg = "How many times you want to blink?";
int blinkNumber;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  
  // Main Programme
  Serial.println(msg);
  
  // Maintain the programme until user input
  while(Serial.available() == 0)
  {
    
  }
  
  blinkNumber = Serial.parseInt();
  Serial.println(blinkNumber);
  
  for(i = 1; i <= blinkNumber; i++)
  {
    digitalWrite(redPin, HIGH);
    delay(800);
    digitalWrite(redPin, LOW);
    delay(800);
  }
}

void loop()
{

}
  
