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
#include <memory>




enum path {DarkForest  , Village  ,Cave };




#pragma once

class misc : public Player
{
public:
    misc();
    ~misc();

    bool introScene();
    void crossRoads();
    
    void SetupPlayer();
    void pres_any_key();
    void ChestScene();
    void battle();
    
private:
    std::unique_ptr<Player> player;
};

#endif