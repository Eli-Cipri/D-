#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include "Inventory.h"


#pragma once

enum class ClassType {
  WARRIOR,
  WIZARD,
  ROGUE
};
class Player
{
public:
    Player(std::string name) : name_(name) {};
    Player();
    virtual ~Player();

    
    void set_damage(const int& m_damage);
    void set_health(const int& m_health);
    ClassType class_type() const { return class_type_; }
    const Inventory& inventory() const {return inventory_;}
    std::string name() const { return name_; }
    
    void addItemToInventory(const Item* item);
    
    int get_damge();
    int get_health();
    virtual void Attack();
   
    
    
private:
    std::string name_;
    ClassType class_type_;
    Inventory inventory_;
    int m_damage;
    int m_health;
    
};

#endif