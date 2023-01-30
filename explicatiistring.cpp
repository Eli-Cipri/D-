#include <iostream>
#include <string>
// folosim #include <  > pentru librarii din C++ si folosim #include "  " pt lib. custom.

void printeaza_nume(std::string Nume)
{
    std::cout << "Salut ma cheama " << Nume << std::endl;
}

// int suma(int a, int b)
// {
//     int rezultat = a + b;
//     printeaza_nume("Cipri");
//     return rezultat;
//     // return a+b; acelasi lucru
// }

int main()
{
    std::cout << "Cum te cheama?\n";
    std::string nume;
    std::getline(std::cin, nume);

    std::cout << suma(10, 20) << std::endl;
    printeaza_nume(nume);

    // char nume = 'S'; // char-ul ocupa 1 bite si ocupa un singur caracter;

    std::string Nume = "Eli";
    std::string Prenume = "Liviu";
    std::string nume_complet = Nume + ' ' + Prenume; // concatenare

    std::cout << nume_complet << std::endl;
    std::cout << "Numarul de caractere in Nume este " << Nume.size() << std::endl;

    std::cout << Prenume[0] << std::endl;
    Prenume[6] = 'S';
    std::cout << Prenume << std::endl;

    std::string input_nume_complet;

    std::cout << "Introdu numele complet: " << std::endl;
    // std::cin >> input_nume_complet;
    std::getline(std::cin, input_nume_complet); // getline cand vrem sa luma mai multe inputuri
    // std::cin.ignore(); // in cazul in care nu mai printeaza din cauza "getline"
    std::cout << input_nume_complet << std::endl;

    return 0;
}