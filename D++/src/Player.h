#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include<string>
#include "misc.h"

#pragma once

class Player
{
public:
    Player(std::string name,int damage,int health);
    Player(){};
    ~Player();

    void getPlayerName(std::string name);
    virtual void Attack()
    {
        std::cout << "Player attacks with " << attackpower << std::endl;
    }
    void inventorycheck();

    protected:
    void setAttackPower(int attack)
    {
        attackpower = attack;
    }
    int attackpower;
private:
    std::string m_nume;
    int m_damage;
    int m_health;
};

#endif