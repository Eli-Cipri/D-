#include "Wizard.h"

Wizard::Wizard(std::string& m_nume)
{
    set_playerName(m_nume);
    set_damage(20);
    set_health(40);
}

Wizard::~Wizard()
{

}

void Wizard::Attack()
{
    std::cout << "Wizard attacks " << std::endl;
    
}

