#ifndef MISC_H
#define MISC_H
#include "Player.h"
#include "Rouge.h"
#include "Warrior.h"
#include "Wizard.h"

#pragma once

class misc
{
public:
    misc();
    ~misc();

    void introScene();

   
    Player* SetupPlayer(std::string name);

private:

};

#endif