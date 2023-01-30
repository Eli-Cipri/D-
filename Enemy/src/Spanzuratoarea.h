#ifndef SPANZURATOAREA_H
#define SPANZURATOAREA_H
#include "Joc.h"
#pragma once

class Spanzuratoarea : public Joc
{
public:
    Spanzuratoarea();
    ~Spanzuratoarea();

    int getSpar()
    {
        return m_spar;
    }
private:
    int m_spar;
};

#endif