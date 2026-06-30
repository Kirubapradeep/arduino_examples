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
  
  for(int speed =0; speed <= 255; speed +=5){
    analogWrite(ENA, speed);
  	delay(50); // Wait for 1000 millisecond(s)
  }
  
  //digitalWrite(IN1, HIGH);
  //digitalWrite(IN2, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  
   for(int speed =255; speed >= 0; speed -=5){
    analogWrite(ENA, speed);
  	delay(50); // Wait for 1000 millisecond(s)
  }
  
  delay(1000); // Wait for 1000 millisecond(s)
}
