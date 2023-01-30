#include <iostream>

int main()
{
    int coffee;
    std::cout << "Ce cafea a-ti dorii?\n";
    std::cin >> coffee;

    switch (coffee)
    {
    case 1:
        std::cout << "Late\n";
        break;
    case 2:
        std::cout << "Americano\n";
        break;
    case 3:
        std::cout << "Cappucino\n";
        break;
    case 4:
        std::cout << "Esspreso\n";
        break;
    case 5:
        std::cout << "Machiato\n";
        break;

    default:
        std::cout << "Nu avem o cafea cu acest numar! " << std::endl;
        break;
    }

    return 0;
}