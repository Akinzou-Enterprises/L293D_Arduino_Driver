#include <L293D.h>

L293D::L293D(int EnablePin, int InputPin1, int InputPin2)
{
    EnPin = EnablePin;
    InputPin_1 = InputPin1;
    InputPin_2 = InputPin2;
    pinMode(EnPin, OUTPUT);
    pinMode(InputPin_1, OUTPUT);
    pinMode(InputPin_2, OUTPUT);
}

void L293D::SetSpeed(int Speed)
{
    speed = Speed;
}

void L293D::Move()
{
    analogWrite(EnPin, speed);
    digitalWrite(InputPin_1, !reversed);
    digitalWrite(InputPin_2, reversed);
}

void L293D::Move(int speed)
{
    analogWrite(EnPin, speed);
    digitalWrite(InputPin_1, !reversed);
    digitalWrite(InputPin_2, reversed);
}


void L293D::Move(int speed, bool reverse)
{
    reversed = reverse;
    analogWrite(EnPin, speed);
    digitalWrite(InputPin_1, !reversed);
    digitalWrite(InputPin_2, reversed);
}


void L293D::Reverse(bool reverse)
{
    reversed = reverse;
}