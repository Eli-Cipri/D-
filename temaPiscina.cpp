#include <iostream>
/*Intrarea la piscina este libera la copii sub 7 ani.
Scrieti un program ce primeste intput varsta si printeaza daca intrarea este gratis
ex:
Input: 6
Outpu: Gratis
*/
int copii(int varsta)
{
    if (varsta < 7)
    {
        std::cout << "Copii sub 7 ani nu platesc.\n";
    }
    else
    {
        std::cout << "Imi pare rau v-a trebuii sa platiti.\n";
    }

    return 0;
}

int main()
{
    copii(2);
}