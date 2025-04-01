int redPin = 11;
int grePin = 10;
int bluPin = 9;

String msg = "Which led do you want to turn ON (red/green/blue)?";
String ledColor;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(grePin, OUTPUT);
  pinMode(bluPin, OUTPUT);
  
  // Ensure all LEDs are OFF at the beginning
  digitalWrite(redPin, LOW);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, LOW);
  
  // Main Program
  Serial.print(msg);
  
  // Maintain the programme until user input
  while(Serial.available() == 0)
  {
    
  }
  
  ledColor = Serial.readString();  
  
  ledColor.trim();  // Remove any extra spaces or newline characters
  
  if (ledColor.equals("red")) {
    digitalWrite(redPin, HIGH);
  } 
  else if (ledColor.equals("green")) {
    digitalWrite(grePin, HIGH);
  } 
  else if (ledColor.equals("blue")) {
    digitalWrite(bluPin, HIGH);
  } 
  else {
    Serial.println("Invalid input. Please enter 'red', 'green', or 'blue'.");
  }
}

void loop()
{

}
  
