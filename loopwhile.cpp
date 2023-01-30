#include <iostream>
#include <string>

bool checkPassword(std::string input)
{
    if (input == "Parola")
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a = 0;
    while (a < 5)
    {
        std::cout << "Val lui a este " << a << std::endl;
        a++;
    }
    bool is_valid = true;
    while (is_valid)
    {
        std::cout << "You are in\n";
        break;
    }
    std::string parola;
    do
    {
        std::cout << "Introduceti parola\n";

        std::cin >> parola;
    } while (!checkPassword(parola));

    return 0;

    // do while facem instructiunea si apoi valideaza
}