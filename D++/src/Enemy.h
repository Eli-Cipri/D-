#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#pragma once

enum EnemyType {Orc,Goblin,Troll};

class Enemy
{
public:
    Enemy(std::string name, int health) ;
    Enemy();
    ~Enemy();

    void setEnemyType(const EnemyType& type );
    std::string getName() const { return name; }
    int getHealth() const { return health; }
    void takeDamage(int damage) { health -= damage; }
    
    bool isDead() const { return health <= 0; }


private:
    EnemyType type;
    std::string name;
    int health;
    
};

#endif