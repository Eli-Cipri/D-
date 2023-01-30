#include <iostream>
#include <string>

void foo(int param)
{

    std::cout << param << std::endl;
    std::cout << "Adresa lui param din foo este " << &param << std::endl; //& este addresOf, adica ne v-a printa adresa lui param
}

void foo_cu_pointer(int *param)
{
    if (param != nullptr)
    {
        std::cout << *param << std::endl; // *pointer = dereferentiere adica accesare valoare din adresa.
        std::cout << "Adresa lui param din foo cu pointer este " << param << std::endl;
    }
    else
    {
        std::cout << "Pointer invalid\n";
    }
}

// int Increment(int param)
// {
//     return ++param;
// }

void Increment(int *param)
{
    if (param != nullptr) // adica daca este diferit de nullptr sa faca incrementarea
        ++*param;
}

void printFood(const std::string &mancare) // punem const ca sa nu putem modifica sau sa fie modificata in cazul in care nu vrem sa copiem si sa simplificam.
{
    std::cout << "Mancarea este : " << mancare << std::endl;
}

void addA(std::string &ref)
{
    ref += "A";
}

int main()
{
    // sintaxa pointer : int * ptr param;
    // sintaxa pointer : tip_data_pointer * nume_pointer ca si in ex de mai sus.

    int param = 5;
    std::cout << "Adresa lui param din main este " << &param << std::endl;
    // 0x2d723ffc6c reprezentari hexadecimale.
    foo(param);
    int *ptr = nullptr; // un pointer ce arata catre o adresa int ;
    // int *ptr = nullptr - adica nu arata spre nimic , practic este null
    ptr = &param;
    foo_cu_pointer(ptr); // daca scrien param simplu il v-a lua ca si int si nu v-a functiona trebuie pus & pentru ca inseamna adressOf
    // param = Increment(param); // incrementeaza si dupa arata rezultatul
    // std::cout << "valoare incrementata este " << Increment(ptr) << std::endl;
    Increment(ptr);
    std::cout << "Valuarea lui param este " << *ptr << std::endl;

    int my_array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        std::cout << &my_array[i] << std::endl;
    }

    // referinte adica "&" care arata adresa:

    std::string pizza = "PIZZA";

    std::string &mancare = pizza;

    // o diferenta dintre pointer si referinta : pointer-ul poate sa fie null dar referinta nu poate sa fie nula; un pointer poate sa arate spre nimic dar referinta nu poate deoarece nu are cum sa arate spre o memorie nula , memoria trebuie sa existe undeva.

    printFood(mancare);

    mancare = "Cartofi";

    printFood(pizza);

    addA(pizza);

    printFood(mancare);

    // Creati o functie ce sa faca swap intre 2 valori
    // a= 5
    // b= 10

    // Dupa swap :
    // a = 10
    // b= 5

    // Scrieti o functie ce va scoate duplicatele dintr-un vector

    /*
    Ai 2 prieteni ce vorbesc orca intre ei.Limba orca sunt aceleasi cuvinte
ca in limba romana doar ca se ia prima litera a fiecarui cuvant si se pune la sfarsitul cuvantului
in urma caruia se adauga un ay
drum= rumday
Input:
Un string ce reprezinta o propozite in limba romana
Output:
Un string ce reprezinta traducerea in limba orca



    */

    return 0;
}