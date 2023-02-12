#include "Enemy.h"

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

const EnemyType Enemy::getType()
{
    return type;
}

EnemyType Enemy::generateEnemy()
{
    srand(time(NULL));
    int random = rand() % 3;
    return static_cast<EnemyType>(random);
}

void Enemy::printEnemy()
{
    switch (enemy) 
    {
    case Orc:
      std::cout << "An Orc appeared!" << std::endl;
      break;
    case Goblin:
      std::cout << "A Goblin appeared!" << std::endl;
      break;
    case Troll:
      std::cout << "A Troll appeared!" << std::endl;
      break;
    default:
      break;
    }
}

