#include <LiquidCrystal.h>

// Led Pins
int grePin = 2;
int redPin = 3;

// Display Pins & Initialiser
int rsPin = 7;
int enPin = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rsPin, enPin, d4, d5, d6, d7); // Initialise Display

// Button Pins & Value
int buttonPin = 6;
int buttonVal;

// Code for simulated Ultrasonic Sensor

long readDistance(int trigPin, int echoPin)
{
  pinMode(trigPin, OUTPUT);  // Clear the trigger
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}


void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(grePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  
  digitalWrite(buttonPin, HIGH);
}

void loop()
{
  
  	lcd.setCursor(0, 0);
  	lcd.print("Please press the");
  	lcd.setCursor(0, 1);
  	lcd.print("Button to start!");
  	
  	buttonVal = digitalRead(buttonPin);
  	
  	while(buttonVal == 1)
    {
      buttonVal = digitalRead(buttonPin);
    }
  	
	
  	int echoVal = readDistance(5, 5);
  	float distance = (echoVal * 0.0343) / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  	
  	delay(800);
  
  	lcd.clear();
  	lcd.setCursor(0, 0);
  	lcd.print("Distance:");
  	lcd.setCursor(0, 1);
  	lcd.print(distance);
  	lcd.setCursor(8, 1);
  	lcd.print("cm");
  	delay(5000);
  	
   // Distance Led Indicator
  	if(distance >= 5 && distance <= 12)
    {
      digitalWrite(grePin, HIGH);
      digitalWrite(redPin, LOW);
    }
  	else
    {
      digitalWrite(grePin, LOW);
      digitalWrite(redPin, HIGH);
    }
}



/* Main Code Template for Ultrasonic Sensor

int trigPin = ;  // Trigger pin
int echoPin = ; // Echo pin

void setup() {
    Serial.begin(9600); 
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    long duration = pulseIn(echoPin, HIGH);
    float distance = (duration * 0.0343) / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);
} 

*/

  
