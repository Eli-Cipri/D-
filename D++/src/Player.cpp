#include "Player.h"

Player::Player(std::string name,int damage,int health):
m_nume(name),
m_damage(damage),
m_health(health)
{

}

Player::~Player()
{

}

void Player::getPlayerName(std::string name)
{
    m_nume = name;
}

void Player::Attack()
{
    
}


void Player::inventorycheck()
{
    
}

