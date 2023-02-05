#ifndef WARRIOR_H
#define WARRIOR_H
#include "misc.h"
#pragma once

class Warrior : public Player
{
public:
    Warrior()
    {
        setAttackPower(30);
    }
    ~Warrior();

    void Attack() override
    {
        std::cout << "Player attacks with " << attackpower << std::endl;
    }
private:

};

#endif