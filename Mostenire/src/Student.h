#ifndef STUDENT_H
#define STUDENT_H
#include "Persoana.h"

#pragma once

class Student : public Persoana//da nu setam public sau protected by default este privat;
{
public:
    Student(int age,std::string nume);
    ~Student();

private:

};

#endif