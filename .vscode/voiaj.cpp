#include <iostream>
/*
Esti intr-un voiaj pe mare de 5 ore.
    Vasul navigeaza cu 40km pe ora.
    Scrieti un program ce va printa cati km a parcurs vasul in fiecare ora
    Ex:
    2
    Vasul a parcurs 40 km
    Vasul a parcrus 80 km
*/
int main()
{
    int ore = 5;
    for (int i = 1; i <= ore; i++)
    {
        int km = 40;
        int km_parcursi = km * i;
        std::cout << "Ai parcurs " << km_parcursi << std::endl;
    }

    return 0;
}