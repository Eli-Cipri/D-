#include <iostream>
// Scrieti un program ce accepta 2 numere ca input si assignati valorile lor unor variabile a si b dupa care sa se printeze o variabila suma
int main()
{
    int a = 0;
    int b;

    std::cout << "a ";
    std::cin >> a;

    std::cout << "b ";
    std::cin >> b;

    int suma_totala = a + b;

    std::cout << "Suma dintre a si b este : " << suma_totala << std::endl;
    return 0;
}
