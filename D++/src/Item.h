#ifndef ITEM_H
#define ITEM_H
#include "Player.h"
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

private:

};

#endif