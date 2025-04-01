//LED Pins
int bit1 = 2;
int bit2 = 3;
int bit3 = 4;
int bit4 = 5;

//Delay Timer
int timer = 1000;

void setup () 
{
   pinMode(bit1, OUTPUT);
   pinMode(bit2, OUTPUT);
   pinMode(bit3, OUTPUT);
   pinMode(bit4, OUTPUT);
}

void loop ()
{
  //0
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, LOW);
  delay(timer);
  
  //1
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, HIGH);
  delay(timer);
  
  //2
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, HIGH);
  digitalWrite(bit4, LOW);
  delay(timer);
  
  //3
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, HIGH);
  digitalWrite(bit4, HIGH);
  delay(timer);
  
  //4
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, HIGH);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, LOW);
  delay(timer);
  
  //5
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, HIGH);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, HIGH);
  delay(timer);
  
  //6
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, HIGH);
  digitalWrite(bit3, HIGH);
  digitalWrite(bit4, LOW);
  delay(timer);
  
  //7
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, HIGH);
  digitalWrite(bit3, HIGH);
  digitalWrite(bit4, HIGH);
  delay(timer);
  
  //8
  digitalWrite(bit1, HIGH);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, LOW);
  delay(timer);
  
  //9
  digitalWrite(bit1, HIGH);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, HIGH);
  delay(timer);
  
  //10
  digitalWrite(bit1, HIGH);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, HIGH);
  digitalWrite(bit4, LOW);
  delay(timer);
}