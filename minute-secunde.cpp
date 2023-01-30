#include <iostream>

int conversie(int minute)
{
    const int secunde = 60;
    int rezultat = minute * secunde;
    std::cout << "Avem " << rezultat << " secunde\n";

    return rezultat;
}

int main()
{
    conversie(60);
    conversie(90);
}