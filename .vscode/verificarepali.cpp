#include <iostream>
#include <string>

std::string verificare(std::string cuvant)
{
    std::string invers = "";
    for (int i = 0; i < cuvant.length(); i++)
    {
        invers[i] = invers.length() - 1;
    }

    return invers;
}
int main()
{
    std::string invers;
    std::cout << "Intorduceti literele : " << std::endl;
    std::cin >> invers;
    std::cout << "Inversul literelor este : " << invers << std::endl;
    verificare(invers);

    return 0;
}