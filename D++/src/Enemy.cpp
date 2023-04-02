#include "Enemy.h"

Enemy::Enemy(std::string name, int health, int damage): name(name), health(health), damage(damage)
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


void Enemy::battle(Player& player)
{
  std::cout << "An enemy has appeared! Get ready to fight!\n\n";

    std::vector<Enemy> enemies
    {
        Enemy("Orc", 30, 10),
        Enemy("Goblin", 20, 5),
        Enemy("Troll", 50, 15)
    };

    // Randomly select an enemy
    srand(static_cast<unsigned int>(time(nullptr)));
    Enemy enemy = enemies[rand() % enemies.size()];

    // Battle loop
    while (true) {
        // Player turn
        std::cout << "Player's turn\n";
        int playerDamage = rand() % 10 + 5;
        std::cout << "You attack " << enemy.getName() << " for " << playerDamage << " damage.\n";
        enemy.takeDamage(playerDamage);
        if (enemy.isDead()) {
            std::cout << "You defeated " << enemy.getName() << "!\n";
            std::cout << "You gained 50 experience points.\n";
            break;
        }
        // Enemy turn
        std::cout << enemy.getName() << "'s turn\n";
        int enemyDamage = enemy.attack();
        std::cout << enemy.getName() << " attacks you for " << enemyDamage << " damage.\n";
        if (player.isDead()) 
        {
            exit(0);
        }
    }
}

