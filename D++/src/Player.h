#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include "Item.h"


#pragma once

enum playerType {wizard= 1,warrior= 2,rouge= 3};
class Player
{
public:
    Player( );
    virtual ~Player();

    void set_playerName(std::string& m_nume);
    void set_damage(const int& m_damage);
    void set_health(const int& m_health);
    void setPlayerType(const playerType& player_Type);

    std::string getPlayerName(std::string m_nume);
    const playerType getType();
    int get_damge();
    int get_health();
    virtual void Attack();
    void inventorycheck();
    std::vector<std::string> inventory;
    Player(playerType type) : player_Type(type) {};
    playerType player_Type;
private:
    std::string m_nume;
    int m_damage;
    int m_health;
    
};

#endif