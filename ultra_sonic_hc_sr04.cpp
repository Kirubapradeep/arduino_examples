int leds[] ={8,9,10};
const int TRIG = 7;
const int ECHO = 6;

long duration;
float distance;


void setup()
{
  for(int i=0; i<3 ; i++){
    pinMode(leds[i], OUTPUT);
  }
  
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if(distance< 10){
    clearAll();
    digitalWrite(10, HIGH);
  } else if ( distance< 50){
    clearAll();
   digitalWrite(9, HIGH);
  } else if (distance< 100) {
    clearAll();
    digitalWrite(8, HIGH);
  } else {
    clearAll();
  }
   
}
void clearAll(){
  for(int i=0; i<3; i++){
  	digitalWrite(leds[i], LOW);
   }
}
