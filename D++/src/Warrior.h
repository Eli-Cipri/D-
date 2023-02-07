#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"


#pragma once

class Warrior: public Player
{
public:
    Warrior(std::string& m_nume);
    ~Warrior();

    void Attack() override;
    
private:

};

#endif