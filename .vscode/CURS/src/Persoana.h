#ifndef PERSOANA_H
#define PERSOANA_H
#include "ZIDENASTERE.h"

#pragma once

class Persoana
{
public:
    Persoana(std::string nume, std::string prenume, ZIDENASTERE ziDeNastere);
    ~Persoana();

    std::string getNume()
    {
        return m_nume;
    }
    std::string getPrenume()
    {
        return m_prenume;
    }

    int getAge();

private:
    std::string m_nume;
    std::string m_prenume;
    ZIDENASTERE ziDeNastere;
};

#endif