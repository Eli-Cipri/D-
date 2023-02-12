#include "misc.h"

// #include "Music.h"




int main(int argc, char const *argv[])
{   
    Music play_sound;
    misc m;
    Enemy enemy ;
    play_sound.inItSounds();
    play_sound.playMainMenu();
    m.introScene();
    m.pres_any_key();
    play_sound.stopMusicMenu();
    play_sound.playCrossroads();
    m.crossRoads();
    Player player;
    m.openChest(player);
    play_sound.stopMusicCrr();
    enemy.generateEnemy();
    enemy.printEnemy();
    
    
    
    
    
    
    
    return 0;
}
