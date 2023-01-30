#ifndef COOL_H
#define COOL_H
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

#pragma once

class Cool
{
public:
    Cool();
    ~Cool();

   int setN();

   int getN()
   {
    return m_N;
   }

    
    

private:
    int m_N;
    

};

#endif