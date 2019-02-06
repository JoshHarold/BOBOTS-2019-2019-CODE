#pragma once
#include <Arduino.h>

class LightSensor{
    public:
    int port = 0;
    LightSensor(int p)
    {
        pinMode(p, INPUT);
        port = p;
    }

    double Read()
    {
        return analogRead(port);
    }
};