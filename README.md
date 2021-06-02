# L293D_Arduino_Driver <br />

#include <L293D.h> <br />

L293D mot1(4, 16, 17); //int EnablePin, int InputPin1, int InputPin2 <br />


void setup()  <br />
{
  mot1.Reverse(false); //set forward  <br />
  mot1.SetSpeed(210); //255 is full speed <br />
}

void loop()  <br />
{ <br />
  mot1.Move(); //move with 210 speed <br />
  delay(1000); <br />
  mot1.Move(255); //move full speed <br />
  delay(1000); <br />
  mot1.Reverse(100, true) //100 speed, back <br />
  delay(1000); <br /> 
}<br /> 
