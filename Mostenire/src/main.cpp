#include "Student.h"




int main(int argc, char const *argv[])
{
    Student* s= new Student(5,"Cipri");
    s->sayHello(); // acelasi lucru (*s).sayHello(); dereferentiem;
    std::cout << "Varsta este " << s->getAge() << std::endl;

    Persoana p = Persoana("test");
    
    //p.m_age;

    delete s;

    return 0;
}
