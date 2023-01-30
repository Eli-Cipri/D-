#include <iostream>

bool inInterval(int val, int min, int max)
{
    if (val >= min && val <= max)
        return true;
    else
        return false;
} // aici verific valoarea caracterului sa fie in interval

bool verifInterval(std::string val, int valMin, int valMax)
{
    for (int i = 0; i < val.size(); i++)
    {
        if (inInterval(val[i], valMin, valMax))
            return true;
    }
    return false;
} // aici verific stringul intreg sa contina macar un caracter in interval
// la a doua functie, practic, returnand true dupa if-ul ala ii zic programului ca parola contine elementul cautat dupa ce il gaseste pe primul
bool validPassword(std::string pw)
{
    const int minSize = 12;
    if (pw.size() >= minSize)
    {
        if (verifInterval(pw, 48, 57) &&
            verifInterval(pw, 33, 47) &&
            verifInterval(pw, 65, 90))
        {
            return true;
        }
    }
    else
        return false;
    return false;
}
// si aici ai functia cu validarea parolei, practic verific parola de 3 ori pentru intervalele la care am nevoie( + marimea sa fie minim 12)