#include "Rouge.h"

Rouge::Rouge(std::string name,ClassType type):
m_nume(name),type_(type)
{
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


