#include <Servo.h>

Servo myServo;
const int trigPin = 9;
const int echoPin = 10;
const int greenPin = 13; // Pin for the indicator LED
const int redPin = 12; // Pin for the indicator LED
const int buzzerPin = 7;
boolean currentOpenState = true; //

void setup() {
  Serial.begin(9600); // Initialize Serial Communication
  myServo.attach(11);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int distance = calculateDistance();
  Serial.print(" State:");
  Serial.println(currentOpenState);
  if (distance < 100) {
    openCloseGate(false);
    digitalWrite(greenPin, LOW); 
    digitalWrite(redPin, HIGH); 
     //digitalWrite(buzzerPin, HIGH);
    tone(buzzerPin, 1000); 
    delay(60);
  } else if (distance >= 100 && distance < 320){
     openCloseGate(true);
     digitalWrite(greenPin, HIGH);
     digitalWrite(redPin, LOW); 
     //digitalWrite(buzzerPin, LOW);
    noTone(buzzerPin); 
    delay(60);
  } else {
    if (currentOpenState==true)  {
       noTone(buzzerPin);
    } else {
       tone(buzzerPin, 1000); 
    }
  }
}

void openCloseGate(boolean open){
  if (open ){
    	currentOpenState = open;
    	myServo.write(90);
    	delay(60);
     	Serial.println(" Gate Opened");
    } else {
   		 currentOpenState = open;
  		myServo.write(180);
     	Serial.println(" Gate Closed");
    	delay(60);
   }
}

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
   Serial.println(distance);
  return distance;
}
