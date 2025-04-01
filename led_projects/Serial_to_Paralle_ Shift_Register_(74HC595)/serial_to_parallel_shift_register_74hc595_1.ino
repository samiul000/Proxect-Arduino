int latchPin = 11; //Ouput Register Clock 
int clockPin = 9;  //Shift Register Clock
int dataPin = 12;  //Input

byte LEDs = 0b00000000;

void setup () 
{
    Serial.begin(9600);
  	pinMode(latchPin, OUTPUT);
  	pinMode(clockPin, OUTPUT);
  	pinMode(dataPin, OUTPUT);
  	
}

void loop ()
{
  	while( LEDs <= 255)
    {
  		digitalWrite(latchPin, LOW);
  		shiftOut(dataPin, clockPin, MSBFIRST, LEDs); //Set Data Ouput Pin from Arduino
  		digitalWrite(latchPin, HIGH);
    	delay(250);
      	
      	LEDs = LEDs + 1;
      	Serial.println(LEDs);
    }
}