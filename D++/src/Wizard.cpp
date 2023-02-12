#include "Wizard.h"

Wizard::Wizard()
{ 
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

