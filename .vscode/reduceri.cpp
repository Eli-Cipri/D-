#include <iostream>
/*
Un supermarket a lansat o campanie de reduceri de 15%  reducere la 3 produse
Scrieti un program ce ia ca input  pretul total pentru fiecare produs si printeaza reducerea aferenta
Ex:
15000
4000
6700
Output:
2250
600
1005
*/

int calc_reduceri(int pret_produs1, int pret_produs2, int pret_produs3)
{
    int reducere_p1 = (15 * pret_produs1) / 100;
    int reducere_p2 = (15 * pret_produs2) / 100;
    int reducere_p3 = (15 * pret_produs3) / 100;
    std::cout << "Reducerea la produse este: " << reducere_p1 << ' ' << reducere_p2 << ' ' << reducere_p3 << std::endl;

    return 0;
}

int main()
{
    calc_reduceri(9000, 340, 60);
}