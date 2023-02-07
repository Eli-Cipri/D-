#ifndef CHEST_H
#define CHEST_H
#include "misc.h"
#include "Player.h"
#include <map>
#pragma once

class Chest 
{
public:
    Chest();
    ~Chest();
    void openChest(int classType);
private:
    std::vector<Item*> items;
    
};

#endif