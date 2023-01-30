#include <iostream>
// buclele se impart in 2 categorii si anume : nedefinite si definite; nedefinite unde nu stim numarul de pasi necesari si definite cand stim numarul de pasi.
const float pi = 3.14;

void foo()
{

    std::cout << "Din Foo() Pi este " << pi << std::endl;
}
int main()

{
    foo();
    std::cout << "Din Main Pi este " << pi << std::endl;
    //      std::cout
    // << "Pi este " << pi << std::endl;
    // std::cout << "Suma este " << 1 + 0 << std::endl; fara bucla
    // std::cout << "suma este " << 1 + 1 << std::endl;
    // std::cout << "suma este " << 1 + 2 << std::endl;

    // fiecare for este definit in sinea lui adica pot sa folosesc acelasi valori in alt for.

    int last_sum = 0;
    int last_index = 0;
    bool b = true;
    for (int i = 0; i < 10; i++)
    {
        last_sum = 1 + i;
        std::cout << "Suma dintre 1 + " << i << " este " << last_sum << std::endl;
        last_index = i;

        if (!b)
        {
            std::cout << "Bye Bye" << std::endl;
            break;
        }
    }

    std::cout << "Last index is " << last_index << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Buna Lume\n";
    }

    // while loop

        return 0;
}