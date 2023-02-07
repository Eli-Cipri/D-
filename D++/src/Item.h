#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#pragma once

class Item 
{
public:
    Item();
    ~Item();

    int AttackPower;
    int MagicPower;
    int Defence;
    std::string ItemType;
    virtual void display();
    std::string getPlayerName();
private:
    std::string m_nume;
};

#endif