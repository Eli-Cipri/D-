#ifndef MOTOR_H
#define MOTOR_H
#include <iostream>
#include <string>

#pragma once

class Motor
{
public:
    Motor(int caiPutere);
    ~Motor();
    void start();

    int getHP()
    {
        return caiPutere;
    }

private:
    int caiPutere;
};

#endif