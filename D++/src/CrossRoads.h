#ifndef CROSSROADS_H
#define CROSSROADS_H
#include "misc.h"

#pragma once

enum path {DarkForest = 1 , Village = 2 ,Cave = 3 };

class CrossRoads
{
public:
    CrossRoads();
    ~CrossRoads();

    void crossRoads();
    void clear_screen()
    {
        system("cls");
    }
private:

};

#endif