#include "Warrior.h"

Warrior::Warrior(std::string& m_nume)
{
    set_playerName(m_nume);
    setPlayerType(warrior);
    set_damage(20);
    set_health(40);
}

Warrior::~Warrior()
{

}

void Warrior::Attack()
{
    std::cout << "Warrior attacks " << std::endl;
    
}

