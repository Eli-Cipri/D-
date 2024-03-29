#ifndef CAR_H
#define CAR_H
#include "Motor.h"

#pragma once

class Car
{
public:
    Car(int cp, std::string culoare, int anul, int km);
    ~Car();
    void printCarInfo();
    void Drive(int km);

private:
    std::string m_culoare;
    int anulFabricatiei;
    int m_km;
    Motor m_motor;
};

#endif