#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#pragma once

enum EnemyType {Orc,Goblin,Troll};

class Enemy
{
public:
    Enemy();
   virtual ~Enemy();
    
    void setEnemyType(const EnemyType& type );
    const EnemyType getType();
    EnemyType generateEnemy();
    void printEnemy();

private:
    EnemyType type;
    int enemy;
};

#endif