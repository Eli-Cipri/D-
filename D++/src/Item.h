#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#pragma once

class Item 
{
public:
    Item(std::string name,int quantity = 1) : name_(name),quantity_(quantity){};
    Item();
    virtual ~Item();

    std::string name() const {return name_;}
    int quantity() const {return quantity_;}
    
    
private:
    std::string name_;
    int quantity_;
};

#endif