#include <iostream>

int main()
{
    int varstaCurenta;
    std::cout << "Ce varsta aveti?" << std::endl;
    std::cin >> varstaCurenta;
    std::cout << "Super, aveti " << varstaCurenta << " de ani";

    std::cout << " In ce an v-ati nascut ? "
              << " " << std::endl;
    int an_nastere;
    std::cin >> an_nastere;
    const int anCurent = 2022;
    varstaCurenta = anCurent - an_nastere;
    std::cout << "Aveti varsta de " << varstaCurenta << std::endl;

    return 0;
}