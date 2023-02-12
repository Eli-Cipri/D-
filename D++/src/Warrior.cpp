#include "Warrior.h"

Warrior::Warrior()
{
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

