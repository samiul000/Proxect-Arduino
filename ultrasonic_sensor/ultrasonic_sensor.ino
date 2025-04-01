//Led Pins
int grePin = 9;
int redPin = 10;

// Code for simulated Ultrasonic Sensor

long readDistance(int trigPin, int echoPin)
{
  pinMode(trigPin, OUTPUT);  // Clear the trigger
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}


void setup() {
  Serial.begin(9600);
  pinMode(grePin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop()
{
	int echoVal = readDistance(5, 5);
  	float distance = (echoVal * 0.0343) / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  	
  	delay(800);
  	
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



/* Main Code for Ultrasonic Sensor

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

  
