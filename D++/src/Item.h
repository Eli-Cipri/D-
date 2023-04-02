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
    

private:
    std::string name;
    
    
};

#endif