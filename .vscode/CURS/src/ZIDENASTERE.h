#ifndef ZIDENASTERE_H
#define ZIDENASTERE_H
#include <iostream>
#include <string>
#include <ctime>
#include <time.h>

#pragma once

class ZIDENASTERE
{
public:
    ZIDENASTERE(int an, int zi, std::string Luna);
    ~ZIDENASTERE();

    int getAn()
    {
        return m_an;
    }
    int getZi()
    {
        return m_zi;
    }
    std::string getLuna()
    {
        return Luna;
    }


private:
    int m_an;
    int m_zi;
    std::string Luna; 
    int m_zilelelunii;
    
};

#endif