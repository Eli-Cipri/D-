#include <iostream>

int main()
{
    int varsta_curenta;
    std::cout << "Ce varsta aveti? " << std::endl;
    std::cin >> varsta_curenta;
    std::cout << "Super, aveti " << varsta_curenta << " de ani\n"; // \n pentru o noua line(sa pui propozitie sub propozitie)

    int an_nastere;
    std::cout << " In ce an v-ati nascut\n ";
    std::cin >> an_nastere;
    const int anCurent = 2022;
    varsta_curenta = anCurent - an_nastere;
    std::cout << "Super, aveti " << varsta_curenta << std::endl;
    return 0;
}