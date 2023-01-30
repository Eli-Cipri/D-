#ifndef CONTBANCAR_H
#define CONTBANCAR_H
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#pragma once

class ContBancar
{
public:
    ContBancar(std::string nume, int sold, int const_var);
    ContBancar();
    // constructor:cu ajutorul lui se instanteaza un obiect in memorie
    ~ContBancar(); // destructor : cu destructor distrugem obiectul

    std::string setNume(std::string nume);

    std::string getNume()
    {
        return m_nume;
    }

    void setSold(int sold);

    int getSold()
    {
        return m_sold;
    }

    void setIban(std::string iban);

    std::string getIban()
    {
        return m_iban;
    }
    std::string generateIBan();

    void print_details();

    // std::string getIban()
    // {
    //     return m_iban;
    // }

    // Tema : o metoda publica prin care puteti sa printati detaliile contului.
    // Extindeti cu un setter si getter pt m_iban.

    // Tema : creati o clasa cu nume Bicicleta ce sa aibe atributele tip_cadru,dimensiune roti,numar de viteze
    // Si metodele de accelerare si franare.

private:
    std::string m_nume;
    int m_sold;
    std::string m_iban;
    const int constVar;
};

#endif