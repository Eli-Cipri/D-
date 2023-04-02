#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Item.h"



#pragma once



enum ClassType {
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
    ClassType getClassType() const {return class_type_;}
    bool isDead();
    std::vector<Item*> addItem( Item* item);
    const std::vector<Item*> getItems();
    std::string getName(Item* item) const;
    void setClassType(ClassType type);
    void printItems();
    void takeDamage(int damage) {m_health -= damage;}
    
private:
    std::string name;
    ClassType class_type_;
    int m_damage;
    int m_health;
    std::vector<Item*> items;
};

#endif