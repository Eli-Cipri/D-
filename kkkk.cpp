#include <iostream>

int main()
{

    const int curent_an = 2022;
    std::cout << "In ce an v-ati nascut?"
              << " " << std::endl;
    int an_nastere, v = 0;
    std::cin >> an_nastere;
    v = curent_an - an_nastere;
    std::cout << "super,aveti " << v << " de ani!";

    return 0;
}
