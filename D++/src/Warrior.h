#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"


#pragma once

class Warrior: public Player
{
public:
    Warrior();
    ~Warrior();
    
    void Attack() override;
    
private:

};

#endif