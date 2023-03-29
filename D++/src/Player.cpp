#include "Player.h"

Player::Player(std::string name): name_(name)
{

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


void Player::addItemToInventory(const Item* item)
{
    Item item1("Health Potion", 3);
    Item item2("Mana Potion", 3);
    Item item3("Gold", 100);
    player.inventory().addItem(item1);
    player.inventory().addItem(item2);
    player.inventory().addItem(item3);
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






