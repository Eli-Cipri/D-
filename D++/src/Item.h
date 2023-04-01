#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <vector>
#pragma once

class Item
{
public:
    Item(std::string name);
    Item();
    std::string getName() const { return name; }
    ~Item();
    void addItem( Item* item);
    const std::vector<Item*> getItems();
    std::string getName(Item* item) const;

private:
    std::string name;
    std::vector<Item*> items;
};

#endif