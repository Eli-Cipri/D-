#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

#pragma once

class Player
{
public:
    Player(std::string name,int damage,int health);
    Player(){};
    ~Player();

    void getPlayerName(std::string name);
    virtual void Attack();
    void inventorycheck();

    // std::vector<Item*> Inventory; 
private:
    std::string m_nume;
    int m_damage;
    int m_health;
};

#endif