
#include <Servo.h>


Servo myServo;

void setup()
{
  myServo.attach(9);
}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (int angle = 0; angle <= 180; angle += 1) {
    
    myServo.write(angle);
    
    delay(15); // Wait for 15 millisecond(s)
  }
  for (int angle = 180; angle >= 0; angle -= 1) {
   
    myServo.write(angle);
    
    delay(15); // Wait for 15 millisecond(s)
  }
}
