//LED Pins
int led1 = 3;
int led2 = 5;
int led3 = 6;
int led4 = 9;
int led5 = 10;
int led6 = 11;

//Delay Timer
//int timer = 1000;

void setup () 
{
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);
   pinMode(led6, OUTPUT);
}

void loop ()
{
  //0 = 0V; 255 = 5V
  
  analogWrite(led1, 8);
  analogWrite(led2, 16);
  analogWrite(led3, 32);
  analogWrite(led4, 64);
  analogWrite(led5, 128);
  analogWrite(led6, 255);
}