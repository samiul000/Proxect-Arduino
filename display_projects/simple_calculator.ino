#include <LiquidCrystal.h>

int rsPin = 7;
int enPin = 8;
int d4Pin = 9;
int d5Pin = 10;
int d6Pin = 11;
int d7Pin = 12;

LiquidCrystal lcd(rsPin, enPin, d4Pin, d5Pin, d6Pin, d7Pin);

void setup()
{
  lcd.begin(16, 2);  // Initialize the LCD
  Serial.begin(9600);  
}

void loop()
{
  // Input A
  lcd.setCursor(0, 0);
  lcd.print("Enter A:");

  while (Serial.available() == 0)
  {
    // Wait until user enters a value
  }

  // Read the input value as float
  float a = Serial.parseFloat();
  lcd.setCursor(10, 0);
  lcd.print("    ");  // Clear previous value
  lcd.setCursor(10, 0);
  lcd.print(a);  // Display input A
  Serial.println(a);  

  delay(500);

  // Input B
  lcd.setCursor(0, 1);  // Move to the second row
  lcd.print("Enter B:");

  while (Serial.available() == 0)
  {
    // Wait until user enters a value
  }

  // Read the input value as float
  float b = Serial.parseFloat();
  lcd.setCursor(10, 1);
  lcd.print("    ");  // Clear previous value
  lcd.setCursor(10, 1);
  lcd.print(b);  // Display input B
  Serial.println(b);  

  delay(500);

  lcd.clear();  // Clear the screen and display the result
  lcd.setCursor(0, 0);
  lcd.print("Enter Operator:");

  while (Serial.available() == 0)
  {
    // Wait until user enters a value
  }

  // Read the operator as a character
  char Op = Serial.read();
  lcd.setCursor(0, 1);
  lcd.print("    ");
  lcd.setCursor(0, 1);
  lcd.print(Op); // Display input Op
  Serial.println(Op);  

  delay(500);

  // Perform the calculation based on the operator
  float c = 0;

  if (Op == '+') 
  {
    c = a + b;
  }
  else if (Op == '-') 
  {
    c = a - b;
  }
  else if (Op == '*') 
  {
    c = a * b;
  }
  else if (Op == '/') 
  {
    if (b != 0) 
    {
      c = a / b;  // Perform division if b is not 0
    }
    else 
    {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Error: Div by 0");
      delay(1000);
      return;  // Return early to avoid further calculations
    }
  }

  // Clear the screen and display the result
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Result:");
  lcd.setCursor(9, 0);
  lcd.print("    ");
  lcd.setCursor(9, 0);
  lcd.print(c);
  Serial.println(c);

  delay(1000);  // Small delay before restarting the loop
  lcd.clear();
}
