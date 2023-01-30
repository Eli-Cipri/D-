/*Oamenii de stiinta au nevoie de ajutor pentru a combate incalzirea globala.
In acest exerctiu trebuie sa analizati inregistrarile temperaturilor si sa o gasititi pe cea mai apropiata de 0
Reguli:
Scrieti un program ce sa printeze temperatura cea mai apropiata de 0 din datele primite.
Daca doua numere sunt la o distanta egala spre 0.Numarul intreg pozitiv va fi considerat cel mai aproape
(de exemplu, daca temperatura este -5 si 5,afisati 5).
In caz de temp 0  se va printa 0
Input:
Linia 1: Veti primi numarul de inregistrai cu temperaturi
Linia 2: Veti primi inregistraile cu valori.
Ex
Input:
5
1 -2 -8 4 5
Output:
1

Input:
3
-12 -5 -137
Output:
-5

Input:
6
42 -5 12 21 5 24
Output:
5
*/

#include "incalzireglobala.h"

int temperaturi(int num_temp[], const int dim)
{
    int min = std::abs(num_temp[0]);

    for (int i = 1; i < dim; i++)
    {
        if (std::abs(num_temp[i]) < min)
        {
            min = num_temp[i];
        }
        else if (std::abs(num_temp[i]) == std::abs(min))
        {
            if (num_temp[i] > min)
            {
                min = num_temp[i];
            }
        }
    }

    return min;
}

int main()
{
    int arr[] = {4, 9, 1, -1, 0};
    std::cout << temperaturi(arr, 5);

    return 0;
}