# L293D_Arduino_Driver

#include <L293D.h>

L293D mot1(4, 16, 17); //int EnablePin, int InputPin1, int InputPin2


void setup() 
{
  mot1.Reverse(false); //set forward
  mot1.SetSpeed(210); //255 is full speed
}

void loop() 
{
  mot1.Move(); //move with 210 speed
  delay(1000);
  mot1.Move(255); //move full speed
  delay(1000);
  mot1.Reverse(100, true) //100 speed, back
  delay(1000);
}
