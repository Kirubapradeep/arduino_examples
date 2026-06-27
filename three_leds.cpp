// C++ code
//
const int red = 8;
const int yellow = 9;
const int green = 10;
void setup()
{
  pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
   digitalWrite(yellow, LOW);
}
