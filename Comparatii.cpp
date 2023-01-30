#include <iostream>

int main()
{
    bool isValid = 5 > 3;
    std::cout << (5 > 3) << std::endl;

    bool is_Valid = 5 > 3;
    std::cout << (5 < 3) << std::endl;

    bool isValid2 = 5 <= 5;
    std::cout << (5 > 5) << std::endl;

    // bool is_Valid2 = 5 == 5;
    char Nume = 'b';
    char vara = 'b';
    // bool isCharValid = Nume == vara;
    // std::cout << isCharValid << std::endl;

    bool isCharValid = Nume != vara;
    std::cout << isCharValid << std::endl;

    int a = 5;
    int c = ++a;

    std::cout << c << std::endl;

    a += 1; // a = a + 1 sau a++

    a = a + 5; // a += 5 sau mai mic a -= 5;

    a *= 5; // a = a * 5

    // a++; // incrementez adica a = a +1;
    std::cout
        << "Valoarea lui a este: " << ++a << std::endl; // a = 6;

    // a--; // decrementez adica a= a -1 ;
    std::cout << "Valoarea lui a este: " << --a << std::endl; // a= 5;

    bool b2 = true;
    bool b3 = false;

    bool b4 = !b2;

    int g = 3, b = 5, d = 8;

    return 0;
}