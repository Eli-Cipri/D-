#ifndef MISC_H
#define MISC_H
#include "Rouge.h"
#include "Warrior.h"
#include "Wizard.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "Music.h"
#include "Enemy.h"



enum path {DarkForest=1  , Village=2  ,Cave=3  };




#pragma once

class misc
{
public:
    misc();
    ~misc();

    bool introScene();
    void crossRoads();
    
    Player* SetupPlayer();
    void pres_any_key();
    void openChest(Player& player);
    void clearPlayer(Player* player);
    
private:
   ;
};

#endif