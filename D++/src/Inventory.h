#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include <unordered_map>
#include "Item.h"
#pragma once

class Inventory
{
public:
    Inventory() : size_(0) {};
    virtual ~Inventory();

    static constexpr int kMaxSize = 10;
    void addItem(const Item* item);
    const std::vector<Item>& items() const {return items_;}


private:
    std::vector<Item> items_;
    int size_;
};

#endif