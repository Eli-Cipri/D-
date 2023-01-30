#include "palindrom.h"

std::string ferificare_palindrom(std::string cuvant)
{

    for (int i = 0; i < cuvant.size(); i++)
    {
        if (cuvant[i] != cuvant[cuvant.size() - i - 1])
        {
            std::cout << "Cuvantul nu este un palindrom\n";
            return "NO";
        }
        else
        {
            std::cout << "Cuvantul este un palindrom\n";
            return "YES";
        }
    }

    return 0;
}

int main()
{
    std::string cuvant_palindrom;
    std::cout << "Introduceti cuvantul : " << cuvant_palindrom << std::endl;
    std::cin >> cuvant_palindrom;

    std::cout << ferificare_palindrom(cuvant_palindrom);
}
