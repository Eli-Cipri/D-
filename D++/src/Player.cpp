#include "Player.h"

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


void Player::AddToInventory(const std::string& item)
{
    inventory_.push_back(item); 
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






