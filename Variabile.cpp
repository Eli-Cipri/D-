#include <iostream>

int main()
{
    // const float PI = 3.14;
    // const int an_curent = 2002;
    int nume_varibile = -1;

    std::cout << "Valuarea variabilei este " << nume_varibile << std::endl;
    // PI = 2;
    //  nume_varibile = 10;
    std::cout << "Intorduceti un numar intreg\n";
    std::cin >> nume_varibile;

    std::cout << "Valuarea variabilei este " << nume_varibile << std::endl;

    nume_varibile = 150;

    std::cout << "Valoarea variabilei modificate este " << nume_varibile << std::endl;

    // int var1, var2;

    std::cout << "Size of a char is: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of a int is: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of a float is: " << sizeof(float) << " bytes" << std::endl;
    /*Tema continuati in continuare pentru restul*/

    /* Creati un program sa va intreve ce varsta aveti si sa printeze pe ecran.
    ex:
    Ce varsta aveti?
    30
    Super, ai 30 de ani

    2.Creati un program ce sa va intreve in ce an v-ati nascut si sa printeze pe ecran ce varsta aveti.

    Ex:
    IN ce an v-ati nascut?
    1991
    Super, aveti 31 de ani



    */

    int var1, var2;
    var1 = 5;
    var2 = 3;
    float var3, var4;
    int sum = var1 + var2;
    int inmultire = var1 * var2;
    var3 = 5;
    var4 = 3;
    float impartire = var3 / var4;
    std::cout << "Impartirea este " << impartire << std::endl;
    std::cout << "Inmultirea este " << inmultire << std::endl;
    std::cout << "Suma este " << sum << std::endl;

    int rest = 4 % 2;
    std::cout << "Restul este " << rest << std::endl;
    int rest_1 = 90 % 50;
    std::cout << "Restul este " << rest_1 << std::endl;

    bool isValid = 5 < 3;
    std::cout << "Rezultat-ul este " << isValid << std::endl;

    return 0;
}