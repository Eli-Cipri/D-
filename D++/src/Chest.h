#ifndef CHEST_H
#define CHEST_H
#include "Item.h"
#pragma once

class Chest
{
public:
    Chest();
    virtual ~Chest();
    
    void addItem(const Item& item) { items.push_back(item); }
    const std::vector<Item>& getItems() const { return items; }

private:
    std::vector<Item> items;
};

#endif