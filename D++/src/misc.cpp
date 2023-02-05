#include "misc.h"



misc::misc()
{

}

misc::~misc()
{

}

 Player* misc::SetupPlayer()
{
    Player* YourName = new Player;
    std::string name;
    std::cout << "Enter your name adventurer" << std::endl;
    std::cin >> name;

    std::cout << "Choose your class\n";
    std::cout << "Wizzard\n";
    std::cout << "Warrior\n";
    std::cout << "Rouge\n";

    std::string choose;
    std::cin >> choose;
    if(choose == "Wizzard")
    {
        std::cout << name << " Wizard: A spell caster with mastery over elemental magic, capable of dealing high damage and providing support to allies." << std::endl;
    } 
    else if (choose == "Warrior")
    {
        std::cout << name << " Warrior: A melee fighter with high physical strength and durability, specializing in weapons and armor." << std::endl;
    }
    else
    {
        std::cout << name << " Rogue: A cunning and agile character who specializes in stealth, thievery, and critical strikes, often dealing high damage from behind enemy lines." << std::endl;
    }

    return YourName;
}

void misc::introScene()
{
    std::cout << "In a small kingdom ruled by a kind and fair king, dark forces have arisen. A powerful sorceress named Morgath has taken control of a nearby castle and is threatening to overthrow the king and enslave the people. The players are heroes who have been called upon to defeat Morgath and restore peace to the kingdom. They must brave treacherous forests, navigate dark dungeons, and face off against fearsome monsters to reach the castle and defeat the sorceress in a final showdown. With courage, cunning, and their own unique abilities, they are the kingdom's only hope" << std::endl;


    std::string choose;
    std::cout << "Do you wanna play? (yes/no)" << std::endl;
    std::cin >> choose;

    if(choose == "yes")
    {
        std::cout << "Great let`s start the adventure!!"<< std::endl;
        SetupPlayer();
    }
    else if (choose == "no")
    {
        std::cout << "All right see you next time." << std::endl;
    }
    else
    {
        std::cout << "Error , you have to choose between yes or no!!" << std::endl; 
    }
}




