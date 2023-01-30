#include <iostream>
/*Vrei sa retragi  niste bani din contul tau bancar.
Programul accepta 2 numere ca input, suma din contul tau si suma pe care vrei sa o scoti.
Calculati si prinati cat ramane in contul tau dupa retragere.

Input:
450000
9000
Output:
441000
*/
int main()
{
    int sumaRetrasa;
    int suma_cont = 0;
    std::cin >> suma_cont;
    std::cout << "Suma cont ininate de retragere este de : " << suma_cont << " lei\n";
    std::cin >> sumaRetrasa;
    std::cout << sumaRetrasa;
    int sumaTotala = suma_cont - sumaRetrasa;

    std::cout << " Suma ramasa in cont dupa retragere este de: " << sumaTotala << " lei\n";

    return 0;
}