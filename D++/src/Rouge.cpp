#include "Rouge.h"

Rouge::Rouge(std::string& m_nume)
{
    set_playerName(m_nume);
    set_damage(20);
    set_health(40);
}


Rouge::~Rouge()
{

}

void Rouge::Attack()
{
    std::cout << "Rouge attacks " << std::endl;
}


