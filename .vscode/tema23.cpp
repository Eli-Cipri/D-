#include <iostream>
#include <string>

bool verificare_palindrom(std::string cuvant)
{

    for (int i = 0; i < cuvant.size(); i++)
    {
        if (cuvant[i] == cuvant[cuvant.size() - i - 1])
        {
            return true;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    std::string cuvant_palindrom;
    std::cout << "Introduceti cuvantul : " << cuvant_palindrom << std::endl;
    std::cin >> cuvant_palindrom;

    std::cout << verificare_palindrom(cuvant_palindrom);

    return 0;
}
