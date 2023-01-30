#include <iostream>

int main()
{
    int secunde;
    std::cin >> secunde;
    for (int i = secunde; i >= 0; i--)
    {
        if (i < secunde)
        {
            std::cout << i << std::endl;
        }
        else
        {
            std::cout << "Si in " << i << std::endl;
        }
    }

    std::cout << "HAPPY NEW YEAR\n";

    return 0;
}