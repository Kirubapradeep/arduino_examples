// C++ code
//
int leds[] ={8,9,10,11,12};
void setup()
{
  for(int i=0; i<5 ; i++){
    pinMode(leds[i], OUTPUT);
  }
  
  
}

void loop()
{
   for(int i=0; i<5; i++){
  	digitalWrite(leds[i], HIGH);
  	delay(300); // Wait for 300 millisecond(s)
  	digitalWrite(leds[i], LOW);
   }
  for(int j=4; j>=0; j--){
  	digitalWrite(leds[j], HIGH);
  	delay(300); // Wait for 300 millisecond(s)
  	digitalWrite(leds[j], LOW);
   }
}
