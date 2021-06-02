#include <Arduino.h>

//if you have ESP32 or ur uC doesnt support stock analogWrite use this!
#include <analogWrite.h>


#pragma once


class L293D
{
    private:
        bool reversed;
        int EnPin;
        int InputPin_1;
        int InputPin_2;
        int speed;

    public:
        L293D(int EnablePin, int InputPin1, int InputPin2);
        void Reverse(bool reverse);
        void Move(int speed, bool reverse);
        void Move(int speed);
        void Move();
        void SetSpeed(int Speed);
};



