#ifndef MISC_H
#define MISC_H
#include "Rouge.h"
#include "Warrior.h"
#include "Wizard.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "Music.h"
#include "CrossRoads.h"



#pragma once

class misc
{
public:
    misc();
    ~misc();

    bool introScene();

    void clear_screen()
    {
        system("cls");
    }
    Player* SetupPlayer();
    void pres_any_key();
private:

};

#endif