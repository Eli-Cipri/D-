#include <iostream>
/*
Un aparat de cafea face 5 tipuri de cafea:
1-Late
2-Americano
3-Esspreso
4-Cappuciono
5-Machiato

Screti un program ce va lua ca input numarul pentru tipul de cafea si va printa cafeaua corespunzatoare
Ex:
Input: 2
Output:Americano
*/

int main()
{
    int coffee;
    std::cout << "Ce cafea a-ti dorii?\n";
    std::cin >> coffee;

    if (coffee == 1)
    {
        std::cout << "Late" << std::endl;
    }
    else if (coffee == 2)
    {
        std::cout << "Americano" << std::endl;
    }
    else if (coffee == 3)
    {
        std::cout << "Esspreso\n";
    }
    else if (coffee == 4)
    {
        std::cout << "Cappucino\n";
    }
    else if (coffee == 5)

    {
        std::cout << "Machiato" << std::endl;
    }

    return 0;
}