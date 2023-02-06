#include "Music.h"

Music::Music()
{

}

Music::~Music()
{

}

bool Music::playMusic()
{
     bool result = PlaySoundW(L"E:\\music for c++\\mainmeniu.wav", NULL, SND_FILENAME |SND_ASYNC);
     if(result == true)
     {
        std::cout << "Playing music" << std::endl;
     } 
    else 
    {
        std::cout << "Failed to play music" << std::endl;
    }

    return result;
}