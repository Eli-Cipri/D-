#include <iostream>
#include "ContBancar.h"
#include <cctype>
#include "Bicicleta.h"
#include "Car.h"
#include "TV.h"
#include "Persoana.h"
#include "ZIDENASTERE.h"

void print()
{
    std::cout << "Hello from a function\n";
}

// structura pentru clase:
// diferenta intre functie si metoda : functia poate sa fie invocata cand dorim noi ,dar la metoda trebuie sa fie invocata printr-un obicet "myCLass ..."
// fiecare obiect are o alta adresa de memorie , o instanta individuala.
class myClass
{
public:
    void printHello()
    {
        std::cout << "Hello from my class\n";
    }
};

// struct test
// {
//     test()
//     {
//         std::cout << "Un test a fost nascut\n";
//     }

//     ~test()
//     {
//         std::cout << "Un test a fost distrus\n";
//     }

//     void printTest()
//     {
//         std::cout << "Hello\n";
//     }
// }

enum Zile
{
    Luni,
    Marti,
    Miercuri,
    Joi,
    Vineri,
    Sambata,
    Duminica
};

ContBancar *CreateAccounts()
{
    // am creat un cont in sitva lui CreateAccounts iar cand se gata adica cand ajunge la final se cheama automat si destructorul;
    std::cout << "Intorduceti numele utilizatorului de cont\n";
    std::string nume;
    std::cin >> nume;
    std::cout << "Intorduceti valoarea soldului initial\n";
    int sold;
    std::cin >> sold;
    ContBancar *cont = new ContBancar(nume, sold, 10);
    return cont;
}

main(int argc, char const *argv[])
{
    ContBancar *c1 = CreateAccounts();
    std::cout << c1->getNume() << std::endl;

    delete c1; // operatorul "delete" va chema destructorul obiectului si va sterge obiectul de pe heap;

    // folosim operatorul "->" cand avem nevoie de acces la metode printr un pointer;
    // memoria stack este o memeorie limitata;
    // memoria heap este o memorie dinamica, daca nu stergi din el se va marii pana da crash pentru ca contine trash adica cache nesters ;
    // operatorul nwe este folosit pentru a instanta pe heap;
    // sintaxa pentru heap = tip poiter numeObiect = new obiect; adica: ContBancar* cont = new ContBancar();
    Zile azi;
    Zile maine;

    azi = Duminica; // Luni;

    maine = Duminica;

    bool sameDay = azi == maine;
    std::cout << sameDay << std::endl;

    // ContBancar c1("Cipri", 90, 5);
    // c1.print_details();
    // c1.setNume("Cipri");
    // c1.setSold(10);
    // std::cout << "Soldul lui c1 este: " << c1.getSold() << std::endl;
    // std::cout << "Numele utilizatorului c1 este: " << c1.getNume() << std::endl;

    // ContBancar c2;
    // c2.print_details();
    // c2.setNume("Ionescu");

    // std::cout << "Numele utilizatorului c2 este: " << c2.getNume() << std::endl;

    std::cout << "Hello World!" << std::endl;
    myClass obiect; // instatiem un obiect de tip myClass
    print();

    // // obiect.printHello(); // invocam metoda printHello
    // ContBancar c3;
    // c3.setNume("ABCDEF");
    // std::cout << "Caraterele sunt :\n " << c3.getNume() << std::endl;

    Car Miky(94, "Albastra", 2001, 200000);
    Miky.printCarInfo();
    Miky.Drive(200);
    Miky.printCarInfo();

    ContBancar iban;
    // iban.setIban("ROITSCHOOL");
    // std::cout << "Iban-ul este " << iban.getIban() << std::endl;

    std::cout << iban.generateIBan() << std::endl;

    TV televizor = TV(9, 4);
    std::cout << televizor.getArie() << std::endl;

    ZIDENASTERE ziNastere = ZIDENASTERE(2002, 29,"1");
    Persoana persoana = Persoana("Daniel","Vulture", ziNastere);
    std::cout << persoana.getNume() << " " << persoana.getPrenume() <<  std::endl;
    std::cout << persoana.getAge() << std::endl;


    return 0;
}
