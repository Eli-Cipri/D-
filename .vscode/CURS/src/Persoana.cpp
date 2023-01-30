#include "Persoana.h"


Persoana::Persoana(std::string nume, std::string prenume, ZIDENASTERE ziDeNastere) : m_nume(nume),
 m_prenume(prenume),
ziDeNastere(ziDeNastere)
{
}

Persoana::~Persoana()
{
}

int Persoana::getAge()
{
    time_t t = time(0); // get time now
    tm *now = localtime(&t);
    //  now->tm_year + 1900;
    //  now->tm_mon + 1;
    //  now->tm_mday;

    int luna = std::stoi(ziDeNastere.getLuna());

    bool adv;

    if((1 + now->tm_mon) < luna)
    {
        adv = false;
    }
    else if((1 + now->tm_mon) == luna)
    {
        if((now->tm_mday) < ziDeNastere.getZi())
        {
            adv= false;
        }
        else
        {
            adv= true;
        }
    }
    else
    {
        adv = true;
    }

    int an,Luna;
    if(adv) 
    {
        an = (1900 + now->tm_year) - ziDeNastere.getAn();
        Luna = (1 + now->tm_mon) - luna;
    } else 
    {
    an = (1900 + now->tm_year ) - ziDeNastere.getAn()- 1;
    Luna = 12 - luna + (1 + now->tm_mon );
    }
    std::cout << an << " " <<  luna << std::endl;

    

    return 0;
}