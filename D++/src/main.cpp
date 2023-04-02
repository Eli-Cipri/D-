#include "misc.h"

// #include "Music.h"


void PlayGame()
{
    Music play_sound;
    misc m;
    Enemy enemy ;
    Player player;
    play_sound.inItSounds();
    play_sound.playMainMenu();
    m.introScene();
    play_sound.stopMusicMenu();
    play_sound.playCrossroads();
    m.crossRoads();
    play_sound.stopMusicCrr();
    play_sound.playBattleFinal();
    m.battle();
    play_sound.stopMusicFb();
}

int main(int argc, char const *argv[])
{   
    PlayGame();
    return 0;
}
