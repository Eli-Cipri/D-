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
    Enemy(std::string name, int health, int damage) ;
    Enemy();
    virtual ~Enemy();
    
    void setEnemyType(const EnemyType& type );
    const EnemyType getType();
    EnemyType generateEnemy();
    void printEnemy();
    std::string getName() const { return name; }
    int getHealth() const { return health; }
    void takeDamage(int damage) { health -= damage; }
    int attack() const { return damage; }
    bool isDead() const { return health <= 0; }

    void battle(Player& player);

private:
    EnemyType type;
    int enemy;
    std::string name;
    int health;
    int damage;
};

#endif