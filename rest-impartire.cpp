#include <iostream>
// metoda 1

// int restulImp(int num1, int num2)
// {
//     std::cout << num1 % num2 << std::endl;
//     return 0;
// }

//  int main()
//  {
//      restulImp(40, 2);
//  }

// metoda 2

int main()
{
    int num1, num2;
    // std :: (numar ales  de un user ) >> (variabila la care v-a fi legata numarul ales de user)
    std::cout << "Alege un impartitor: \n ";

    std::cin >> num1;
    std::cout << "Alege un deimpartit: \n";
    std::cin >> num2;

    std::cout << "Restul impartirii este : " << num1 % num2 << std::endl;
    return 0;
}