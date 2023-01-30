#include "ContBancar.h"

ContBancar::ContBancar(std::string nume, int sold, int const_var)
    : m_nume(nume), m_sold(sold), m_iban("B33BUKB20201555555555"), constVar(const_var)
{
    // m_nume = nume;
    // m_sold = sold;
    // m_iban = "B33BUKB20201555555555";
    // constVar = const_var;

    // invocati genIban tema
    std::cout << "Un cont a fost creat\n"
              << std::endl;
}

ContBancar::ContBancar()
    : m_nume("necunoscut"), m_sold(0), m_iban("B33BUKB20201555555555"), constVar(5)

{
    // m_nume = "Necunoscut";
    // m_sold = 0;
    // m_iban = "B33BUKB20201555555555";
}

ContBancar::~ContBancar()
{
    std::cout << "Un cont a fost sters\n"
              << std::endl;
}

// std::string ContBancar::setNume(std::string nume)
// {
//     // tema :implementati un check in care nume sa fie doar caractere latine.

//     char latina[] = "";
//     for (int i = 0; i < nume.length(); i++)
//     {
//         if (isalpha(latina[i]))
//             (printf("Caracterele sunt latine\n", latina[i]));

//         else
//             printf("Caraterele nu sunt in limbajul latin\n", latina[i]);

//         m_nume = nume;
//     }
//     return m_nume;
// }

void ContBancar::setSold(int sold)
{
    if (sold < 0)
    {
        std::cout << "Soldul initial trebuie sa fie mai mare de 0\n";
    }
    else
    {
        m_sold = sold;
    }
}

void ContBancar::print_details()
{
    std::cout << "Numele contului este: " << m_nume << std::endl;
    std::cout << "Soldul contului este: " << m_sold << std::endl;
    std::cout << "Ibanul contului este: " << m_iban << std::endl;
}

void ContBancar::setIban(std::string iban)
{
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1, 15);
    std::cout << "ROITSCHOOL" << rd() << "\n";
}

std::string ContBancar::generateIBan()
{
    std::string initialAccountToken = "ROITSCHOOL";

    srand(time(NULL));

    for (int i = 0; i < 15; i++)
    {
        initialAccountToken += std::to_string(rand() % 10);
    }

    return initialAccountToken;
}
