#include "Student.h"

Student::Student(int age,std::string nume):
Persoana(nume)
{
    std::cout << "Student aparut nou\n";
    m_age = age;// este metoda privata din persoana.h si nu poate fi accesata de copii lor , numai daca o trecem la public v a functiona.
    
}

Student::~Student()
{
    std::cout << "Student disparut din nou\n";
}