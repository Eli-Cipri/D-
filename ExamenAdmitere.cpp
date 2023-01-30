/*   Pentru a studia la Univeristatea ITSchool trebuie sa treci de un examen de admitere.
Nota minima este 8

Task:
Creati un program ce sa primeasca ca input nota de la examen si sa printeze ADMIS pentru
note mai mari sau egale cu 8, iar in caz contrar sa printeze RESPINS
*/
#include <iostream>

int main()
{
    int nota_examen;
    std::cout << "Nota ta este: " << std::endl;
    std::cin >> nota_examen;

    if (nota_examen >= 8)
    {
        std::cout << "Admis\n";
    }
    else
    {
        std::cout << "Respins\n";
    }

    return 0;
}