#include "Player.h"

Player::Player(std::string name)
{
    this->name = name;
    
}
Player::Player()
{

}

Player::~Player()
{
    
}



void Player::set_damage(const int& m_damage)
{
    this->m_damage = m_damage;
    
}

void Player::set_health(const int& m_health)
{
    this->m_health = m_health;
    
}



int Player::get_damge()
{
    return m_damage;
}

int Player::get_health()
{
    return m_health;
}

void Player::Attack()
{
    std::cout << "Attack" << std::endl;
}


bool Player::isDead()
{
   if(m_health = 0)
    {
         std::cout << "You were defeated by\n";
         std::cout << "Game Over" << std::endl;

    } 
    return true;
    
}

std::vector<Item*> Player::addItem(Item* item)
{
     items.push_back(item);
     return items;
}

std::string Player::getName(Item* item) const
{
    return name;
}

const std::vector<Item*> Player::getItems()
{
    return items;
}








