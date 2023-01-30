#include "Persoana.h"

Persoana::Persoana(std::string nume):
m_nume(nume)
{
    std::cout << "O pers creat fost\n";
    std::cout << nume << std::endl;
}

Persoana::~Persoana()
{
    std::cout << "O pers stearsa a fost\n";
}

void Persoana::sayHello()
{
    std::cout << "Hello my name is " << m_nume << std::endl;
}