#include "misc.h"

misc::misc()
{

}


misc::~misc()
{

}
void clear_screen()
{
    system("cls");
}


 Player* misc::SetupPlayer()
{
    clear_screen();
    std::string name,player_type;
    std::cout << "Enter your name adventurer" << std::endl;
    std::cin >> name;

    int chose;
    clear_screen();
    std::cout << "Choose your class\n";
    std::cout << "1.wizard\n";
    std::cout << "2.warrior\n";
    std::cout << "3.rouge\n";

    std::cin >> chose;
    ClassType type;
    switch (chose)
    {
    case 1:
        std::cout << "You chose wizard " << name << std::endl;
        type = ClassType::WIZARD; 
        break;
    case 2:
        std::cout << "You chose warrior " << name << std::endl;
        type = ClassType::WARRIOR; 
        break;
    case 3:
        std::cout << "You chose rouge " << name << std::endl;
        type = ClassType::ROGUE; 
        break; 
    default:
        std::cout << "Invalid input you need to chose between these three: wizard/warrior/rouge" << std::endl;
        break;
    }

    if(player_type == "wizard")
    {
        Player* player = new Wizard;
        return player;
    }
    else if(player_type == "warrior")
    {
        Player* player = new Warrior;
        return player;
    }
    else
    {
        Player* player = new Rouge;
        return player;
    }
    
    
}

void misc::pres_any_key()
{   
    
    std::cout << "Press any key to continue:\n";
    getch();
    clear_screen();
}




void misc::ChestScene(Player* player)
{
     clear_screen();
   
         // Create a chest and add items based on player's class_type
    Item item;
    
switch (player->getClassType()) {
    case ClassType::WARRIOR:
        item.addItem(Item("Sword"));
        break;
    case ClassType::WIZARD:
        item.addItem(Item("Magic Wand"));
        break;
    case ClassType::ROGUE:
        item.addItem(Item("Dagger"));
        item.addItem(Item("Lockpick"));
        break;
    
}
    // Ask player if they want to open the chest
    std::cout << "You find a chest along the path. Do you want to open it? (y/n)\n";
    char choice;
    std::cin >> choice;
    if (choice == 'y') {
        // Add items to player's inventory and print messages
        std::cout << "You open the chest and find the following items:\n";
   
        for (auto item : item.getItems()) {
            item->addItem(item);
            std::cout << "- " << item->getName() << "\n";
        }
        std::cout << "You add the items to your inventory.\n";
    } else {
        std::cout << "You leave the chest behind and continue on your journey.\n";
    }

}


bool misc::introScene()
{
    
    std::cout << "In a small kingdom ruled by a kind and fair king, dark forces have arisen. A powerful sorceress named Morgath has taken control of a nearby castle and is threatening to overthrow the king and enslave the people. The players are heroes who have been called upon to defeat Morgath and restore peace to the kingdom. They must brave treacherous forests, navigate dark dungeons, and face off against fearsome monsters to reach the castle and defeat the sorceress in a final showdown. With courage, cunning, and their own unique abilities, they are the kingdom's only hope" << std::endl;
    
    
    int choose;
    std::cout << "Do you wanna play? \n";
    std::cout << "1.Yes\n";
    std::cout << "2.No" << std::endl;
    std::cin >> choose;

    switch (choose)
    {
    case 1 :
        std::cout << "Go on travaler" << std::endl;
        SetupPlayer();
        break;
    case 2 :
        std::cout << "See you next time" << std::endl;
        std::exit(0);
        break;  
    default:
        std::cout << "Invalid input" << std::endl;
        break;
    }
    
    clear_screen();
    return true;
}

void misc::crossRoads()
{
    
    int choose;
    std::cout << "Choose the road carefully because you don't know what awaits you,you can choose from\n ";
    std::cout << "1.DarkForest\n";
    std::cout << "2.Village\n";
    std::cout << "3.Cave\n";
    std::cin >> choose;

    switch (choose)
    {
    case 1 :
        std::cout << "So you chose Dark Forest, it's not the wisest choice, but you'll manage " << std::endl;
        
        break;
    case 2 :
        std::cout << "Wise choice" << std::endl;
        
        break;
    case 3 :
        std::cout << "So you chose death" << std::endl;
        
        break;
    default:
        std::cout << "Invalid input" << std::endl;
        break;
    }
    
}



