// C++ code
//
const int red = 8;
const int button = 2;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(button) == LOW){
  	digitalWrite(red, HIGH);
  	delay(200);
  	digitalWrite(red, LOW);
  	delay(200);
  }
  else { 
  	 digitalWrite(red, HIGH);
     delay(1000);
     digitalWrite(red, LOW);
     delay(1000);
  }
}
