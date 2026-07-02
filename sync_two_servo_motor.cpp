#include <Servo.h>


Servo myServo1;
Servo myServo2;

void setup()
{
  myServo1.attach(9);
  myServo2.attach(10);
  Serial.begin(9600);
}

void loop()
{
  
   myServo1.write(0);
   myServo2.write(30);
   delay(3000);
  
  // sweep the servo1 and servo2 from 0 to 180 degrees in steps
  // of 1 degrees
  for (int angle = 0; angle <= 180; angle += 1) {
    
    //Printl anlge for every 20degree
    if(angle%20 == 0) {
    Serial.print("servo1 :");
    Serial.println(angle);
    }
    
    // Servo 1
    myServo1.write(angle);
   
    // Servo 2
    //myServo2.write(angle); // task1
    //myServo2.write(180-angle); // task2
    myServo2.write(30+angle/2); //task3
    
    
    delay(15); // Wait for 15 millisecond(s)
    }
}
