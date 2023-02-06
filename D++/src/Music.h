#ifndef MUSIC_H
#define MUSIC_H
#include "misc.h"
#include <windows.h>
#include <mmsystem.h>

#pragma once
#pragma comment(lib, "winmm.lib")

class Music
{
public:
    Music();
    ~Music();

    bool playMusic();
private:

};

#endif