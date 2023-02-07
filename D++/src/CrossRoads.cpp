#include "CrossRoads.h"

CrossRoads::CrossRoads()
{

}

CrossRoads::~CrossRoads()
{

}

void CrossRoads::crossRoads()
{   
    clear_screen();
    char choose;
    std::cout << "Choose the road carefully because you don't know what awaits you,you can choose from\n ";
    std::cout << "1.DarkForest\n";
    std::cout << "2.Village\n";
    std::cout << "3.Cave\n";
    std::cin >> choose;

    switch (choose)
    {
    case DarkForest :
        std::cout << "So you chose Dark Forest, it's not the wisest choice, but you'll manage " << std::endl;
        break;
    case Village :
        std::cout << "Wise choice" << std::endl;
        break;
    case Cave :
        std::cout << "So you chose death" << std::endl;
        break;
    default:
        break;
    }
    
}