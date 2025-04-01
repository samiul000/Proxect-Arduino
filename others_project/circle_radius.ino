int j = 1;
float pi = 3.1416;
float area;

int timer = 750;

void setup () 
{
   Serial.begin(9600);
}

void loop ()
{
  j += 1;
  area = pi*j*j;
  
  Serial.print("Area ");
  Serial.print(j);
  Serial.print(" : ");
  Serial.println(area);
  
  delay(timer);
}