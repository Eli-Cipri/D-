#include "misc.h"

// #include "Music.h"




int main(int argc, char const *argv[])
{   
    CrossRoads go;
    Music play_sound;
    misc m,n;
    play_sound.inItSounds();
    play_sound.playMainMenu();
    m.introScene();
    n.pres_any_key();
    play_sound.stopMusicMenu();
    play_sound.playCrossroads();
    go.crossRoads();
    play_sound.stopMusicCrr();

    
    
    
    
    return 0;
}
