// #include <iostream>
// /*Esti un bucatar intr-un restaturant. Ai nevoie exact de 3 pesti
// ca sa pregatesti o ciorba de peste numita Trio
// Scrieti un program ce va lua un input de numar de pesti si sa se printeze cate ciorbe trio se pot obtine.

// ExInput: 14
// ExOutput:4
// */
// int main()
// {
//     // const int inputPesti = 3;
//     // std::cout << "Cati pesti avem: " << inputPesti << " pesti!\n";
//     // int nevoiePesti;

//     // std::cin >> nevoiePesti;
//     // int suma_ciorbe_trio = nevoiePesti / inputPesti;

//     // std::cout << "Atatea ciorbe Trio putem face : " << suma_ciorbe_trio << " dom` bucatar\n";

//     // return 0;

//     // dc numarul random este mereu 0?(problema de rezolvat)
//

#include <iostream>

int main()
{
    const int a = 3;

    std::cout << "Scoate un numar : " << std::endl;

    int b;
    std::cin >> b;

    int sum = b - a;

    std::cout << sum << std::endl;

    return 0;
}