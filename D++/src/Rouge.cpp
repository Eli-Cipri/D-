#include "Rouge.h"

Rouge::Rouge(name,ROUGE):

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


