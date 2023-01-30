#include <iostream>
// #include "Misc.h"


class Enemy
{
    public:
    Enemy();
    void setAttackPower(int a)
    {
        attackPower = a;
    }

    void Attack()
    {
        std::cout << "Enemy attacks with dick" << attackPower << std::endl;
    }

    protected:
    int attackPower;
};

class ninia : public Enemy
{
    public:
    void Attack()
    {
        std::cout << "Ninja attacks with power " << attackPower << std::endl;
    }
};

class Monster : public Enemy
{
    public:
    void Attack()
    {
        std::cout << "Attack dosen`t do dmg" << attackPower << std::endl;
    }
};



int main(int argc, char const *argv[])
{
    Monster m;
    ninia n;

    Enemy * e1 = &m;
    Enemy * e2 = &n;

    e1->setAttackPower(20);
    e2->setAttackPower(30);

    e1->Attack();



    return 0;
}
