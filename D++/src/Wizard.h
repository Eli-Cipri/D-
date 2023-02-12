#ifndef WIZARD_H
#define WIZARD_H
#include "Player.h"

#pragma once

class Wizard : public Player
{
public:
    Wizard();
    Wizard(std::string& m_nume);
    ~Wizard();
    
    void Attack();
private:

};

#endif