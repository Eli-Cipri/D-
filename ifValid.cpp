#include <iostream>

bool mai_mare(int paine)
{
    const int pret_paine = 5;

    if (paine > pret_paine)

        return false;
}

int main()
{
    int pret;
    std::cin >> pret;
    if (mai_mare(pret))
    {
        std::cout << "Nu ai destui bani\n";
    }

    std::cout << "Esti sarac!\n";

    return 0;
}
