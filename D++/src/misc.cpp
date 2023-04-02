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


 void misc::SetupPlayer()
{
    clear_screen();
    std::string name;
    std::cout << "Enter your name adventurer" << std::endl;
    std::cin >> name;

    int chose;
    clear_screen();
    std::cout << "Choose your class\n";
    std::cout << "1.wizard\n";
    std::cout << "2.warrior\n";
    std::cout << "3.rouge\n";

    std::cin >> chose;
    clear_screen();
    ClassType type;
    switch (chose)
    {
    case 1:
        player = std::make_unique<Wizard>();
        std::cout << "You chose wizard " << name << std::endl;
        player->setClassType(WIZARD);
        pres_any_key();
        break;
    case 2:
        player = std::make_unique<Warrior>();
        std::cout << "You chose warrior " << name << std::endl;
        player->setClassType(WARRIOR);
        
        break;
    case 3:
        player = std::make_unique<Rouge>();
        std::cout << "You chose rouge " << name << std::endl;
        player->setClassType(ROGUE);
        
        break; 
    default:
        std::cout << "Invalid input you need to chose between these three: wizard/warrior/rouge" << std::endl;
        break;
        
    } 
    pres_any_key();
}

void misc::pres_any_key()
{   
    
    std::cout << "Press any key to continue:\n";
    getch();
    clear_screen();
}




void misc::ChestScene()
{
     clear_screen();
   
         // Create a chest and add items based on player's class_type
switch (player->getClassType()) 
{
    case WARRIOR:
        player->addItem(new Item("Sword"));
        break;
    case WIZARD:
        player->addItem(new Item("Magic Wand"));
        break;
    case ROGUE:
        player->addItem(new Item("Dagger"));
        player->addItem(new Item("Lockpick"));
        break;
    default:
    std::cout << "Invalid input" << std::endl;
    pres_any_key();
        break;
}
    // Ask player if they want to open the chest
    std::cout << "You find a chest along the path. Do you want to open it? (y/n)\n";
    char choice;
    std::cin >> choice;
    if (choice == 'y') 
    {
        // Add items to player's inventory and print messages
        std::cout << "You open the chest and find the following items:\n";
   
        player->printItems();
        std::cout << "You add the items to your inventory.\n";
    } 
    else 
    {
        std::cout << "You leave the chest behind and continue on your journey.\n";
        pres_any_key();

    }

}


void misc::battle()
{
   std::cout << "An enemy has appeared! Get ready to fight!\n\n";

    std::vector<Enemy> enemies
    {
        Enemy("Orc", 40),
        Enemy("Goblin", 50),
        Enemy("Troll", 100)
    };

    // Randomly select an enemy
    srand(static_cast<unsigned int>(time(nullptr)));
    Enemy enemy = enemies[rand() % enemies.size()];

    // Battle loop
    while (true) {
        // Player turn
        std::cout << "Player's turn\n";
        int playerDamage = rand() % 10 + 5;
        std::cout << "You attack " << enemy.getName() << " for " << playerDamage << " damage.\n";
        enemy.takeDamage(playerDamage);
        if (enemy.isDead()) 
        {
            std::cout << "You defeated " << enemy.getName() << "!\n";
            std::cout << "You gained 50 experience points.\n";
            return;
        }
        // Enemy turn
        std::cout << enemy.getName() << "'s turn\n";
        int enemyDamage = rand() % 10 + 5;
        std::cout << enemy.getName() << " attacks you for " << enemyDamage << " damage.\n";
        player->takeDamage(enemyDamage);
        if (player->isDead()) 
        {
            std::cout << "You were defeated by " << enemy.getName() << std::endl;
            std::cout << "Game Over" << std::endl;
            return;
        }
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

    clear_screen();

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
    pres_any_key();
    ChestScene();
        
}



