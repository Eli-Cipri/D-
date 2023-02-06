#include "misc.h"
#include "Warrior.h"
#include "Wizard.h"
#include "Rouge.h"
#include "Music.h"



int main(int argc, char const *argv[])
{
    misc m;
    m.introScene();
    Music intro;
    intro.playMusic();
    
    return 0;
}
