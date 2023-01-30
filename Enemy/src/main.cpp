#include <iostream>
#include "Spanzuratoarea.h"




class Enemy
{
    public:
    Enemy()
    {

    }
    

    virtual void Attack()
    {
        std::cout << "Enemy attacks with power " << attackPower << std::endl;
    }

    protected:
     void setAttackPower(int a)
    {
        attackPower = a;
    }
    int attackPower;
};

class ninia : public Enemy
{
    public:
    ninia()
    {
        setAttackPower(30);
    }
    void Attack() override
    {
        std::cout << "Ninja attacks with power " << attackPower << std::endl;
    }
};

class Monster : public Enemy
{
    public:
    Monster()
    {
        setAttackPower(30);
    }
    void Attack() override
    {
        std::cout << "Monster attack with power " << attackPower << std::endl;
    }
};

class Orc : public Enemy
{
    public:
    Orc()
    {
        setAttackPower(20);
    }
    void Attack()
    {
        std::cout << "Orcul te ataca cu " << attackPower <<" putere" << std::endl;
    }
};


void BattleScene(Enemy* e)
{
    std::cout << "Enemy attacks you\n";
    e->Attack();
}

int main(int argc, char const *argv[])
{
    Monster m;
    ninia n;

    Enemy* e1 = &m;
    Enemy* e2 = &n;

    Spanzuratoarea c1;
    std::cout << c1.getSpar() << std::endl;
    // e1->setAttackPower(20);
    // e2->setAttackPower(30);

    // e1->Attack();
    // e2->Attack();

    BattleScene(e1);
    BattleScene(e2);

    Orc o;
    Enemy* e3 = &o;
    BattleScene(e3);

    return 0;
}




// int main(int argc, char const *argv[])
// {
//     std::cout<< "Hello World!" << std::endl;
//     return 0;
// }
