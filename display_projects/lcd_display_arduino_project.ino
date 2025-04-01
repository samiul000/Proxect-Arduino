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
}

void loop()
{
  lcd.setCursor(0, 0); // Display Coordinates
  lcd.print("Hello World!"); // Show Output 
  lcd.setCursor(0, 1);
  lcd.print("I AM ---");
}
