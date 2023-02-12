#include "Rouge.h"

Rouge::Rouge()
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


