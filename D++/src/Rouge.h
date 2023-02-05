#ifndef ROUGE_H
#define ROUGE_H
#include "misc.h"

#pragma once

class Rouge : public Player
{
public:
    Rouge()
    {
        setAttackPower(30);
    }
    ~Rouge();

    void Attack() override
    {
       std::cout << "Player attacks with " << attackpower << std::endl; 
    }

private:

};

#endif