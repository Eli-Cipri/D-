#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::set_playerName(std::string& m_nume)
{
    this->m_nume = m_nume;
}

void Player::set_damage(const int& m_damage)
{
    this->m_damage = m_damage;
    
}

void Player::set_health(const int& m_health)
{
    this->m_health = m_health;
    
}

void Player::setPlayerType(const playerType& player_Type)
{
    this->player_Type = player_Type;
}


std::string Player::getPlayerName(std::string name)
{
    return name;
}

const playerType Player::getType()
{
    return player_Type;
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


void Player::inventorycheck()
{
     for (const auto &item : inventory) 
    {
        //std::cout << item->;
    }
}



