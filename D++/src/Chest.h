#ifndef CHEST_H
#define CHEST_H
#include "misc.h"
#include "Player.h"
#include <map>
#include <algorithm>
#pragma once

class Chest  
{
public:
    Chest();
    ~Chest();
    void openChest();
private:
    std::vector<Item*> items;
    
};

#endif