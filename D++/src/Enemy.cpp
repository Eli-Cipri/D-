#include "Enemy.h"

Enemy::Enemy(std::string name, int health): name(name), health(health)
{

}

Enemy::Enemy()
{
  
}



Enemy::~Enemy()
{

}

void Enemy::setEnemyType(const EnemyType& type)
{
    this->type = type;
}

