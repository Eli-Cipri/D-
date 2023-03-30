#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include "Item.h"


#pragma once

enum class ClassType {
  WARRIOR,
  WIZARD,
  ROGUE
};
class Player
{
public:
    Player(std::string name) ;
    Player();
    virtual ~Player();

    
    void set_damage(const int& m_damage);
    void set_health(const int& m_health);
    ClassType class_type() const { return class_type_; }
    int get_damge();
    int get_health();
    virtual void Attack();
    std::string getName() const;
    ClassType getClassType() const {return class_type_;}
     void addItem(const Item& item) { items.push_back(item); }
    const std::vector<Item>& getItems() const { return items; }
    
    
private:
    std::string name;
    ClassType class_type_;
    int m_damage;
    int m_health;
    std::vector<Item> items;
};

#endif