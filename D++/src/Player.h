#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include "Item.h"

#pragma once

class Player
{
public:
    Player();
    virtual ~Player();

    void set_playerName(std::string& m_nume);
    void set_damage(const int& m_damage);
    void set_health(const int& m_health);
    void playerType();

    std::string getPlayerName(std::string m_nume);
    int get_damge();
    int get_health();
    virtual void Attack();
    void inventorycheck();
    void addInInventory(Item* items);
     
private:
    std::string m_nume;
    int m_damage;
    int m_health;
    std::vector<Item*> inventory;
};

#endif