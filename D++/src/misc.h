#ifndef MISC_H
#define MISC_H
#include "Rouge.h"
#include "Warrior.h"
#include "Wizard.h"
#include "Item.h"  
#include <iostream>
#include <string>
#include "Player.h"

#pragma once

class misc
{
public:
    misc();
    ~misc();

    void introScene();

   
    Player* SetupPlayer();

private:

};

#endif