#include <iostream>
#include <string>

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
std::string strOrca(std::string in)
{
    int size = in.size();
    char fChar = in[0];

    for (int i = 1; i < size; i++)
    {
        in[i - 1] = in[i];
    }
    in[size - 1] = fChar;

    std::string out = in + "ay";

    // in += "ay";

    return out;
}

void trdprp(std::string prop)
{
    std::string word = "";
    for (int i = 0; i < prop.size(); i++)
    {
        if (prop[i] == ' ')
        {
            std::cout << strOrca(word) << " ";
            word = "";
        }
        else
        {
            word += prop[i];
        }
    }
}

int main()
{
    // std::string str = "Jugubigule bugule muie";
    trdprp("Opa dopa anfetamina sopa");
}

// void orca(std::string &in)
// {
//     int size = in.size();
//     char fChar = in[0];

//     for (int i = 1; i < size; i++)
//     {
//         in[i - 1] = in[i];
//     }
//     in[size - 1] = fChar;

//     in += "ay";
// }