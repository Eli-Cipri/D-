#ifndef WIZARD_H
#define WIZARD_H
#include "misc.h"
#pragma once

class Wizard : public Player
{
public:
    Wizard()
    {
        setAttackPower(30);
    }
    ~Wizard();

    void Attack() override
    {
        std::cout << "Player attacks with " << attackpower << std::endl;
    }
private:

};

#endif