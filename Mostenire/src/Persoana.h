#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>
#include<string>

#pragma once

class Persoana
{
public:
    Persoana(std::string nume);
    ~Persoana();

    void sayHello();

    int getAge()
    {
        return m_age;
    }

    
protected: // putem incapsula
    int m_age;

private:
    std::string m_nume;

};

#endif