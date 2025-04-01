int latchPin = 11; //Ouput Register Clock 
int clockPin = 9;  //Shift Register Clock
int dataPin = 12;  //Input

int timer = 500;

byte LEDs = 0b11111110;

void setup () 
{
    Serial.begin(9600);
  	pinMode(latchPin, OUTPUT);
  	pinMode(clockPin, OUTPUT);
  	pinMode(dataPin, OUTPUT);
  	
}

void loop ()
{
  		//Cicular Shift Left
  		digitalWrite(latchPin, LOW);
  		shiftOut(dataPin, clockPin, LSBFIRST, LEDs); //Set Data Ouput Pin from Arduino
  		digitalWrite(latchPin, HIGH);
    	delay(timer);
      	
      	LEDs = (LEDs/128) + (LEDs*2);
      	Serial.println(LEDs, BIN);
  		
  		//delay(100);
  
  		//Circular Shift Right
  		//digitalWrite(latchPin, LOW);
  		//shiftOut(dataPin, clockPin, LSBFIRST, LEDs); //Set Data Ouput Pin from Arduino
  		//digitalWrite(latchPin, HIGH);
    	//delay(timer);
      	
      	//LEDs = (LEDs*128) + (LEDs/2);
      	//Serial.println(LEDs, BIN);
  
}