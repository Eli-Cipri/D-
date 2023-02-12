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
    Player();
    virtual ~Player();

    
    void set_damage(const int& m_damage);
    void set_health(const int& m_health);
    std::string name() const { return name_; }
    ClassType class_type() const { return class_type_; }
    const std::vector<std::string>& inventory() const { return inventory_; }

    void AddToInventory(const std::string& item);
    
    
    int get_damge();
    int get_health();
    virtual void Attack();
   
    
    
private:
    std::string m_name;
    std::string name_;
    ClassType class_type_;
    std::vector<std::string> inventory_;
    int m_damage;
    int m_health;
    
};

#endif