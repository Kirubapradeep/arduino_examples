// C++ code
//
const int ENA = 9;
const int IN1 = 8;
const int IN2 = 7;

void setup()
{
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
}

void loop()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 128);
  delay(8000); // Wait for 1000 millisecond(s)
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(8000); // Wait for 1000 millisecond(s)
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 191);
  delay(8000); // Wait for 1000 millisecond(s)
}
