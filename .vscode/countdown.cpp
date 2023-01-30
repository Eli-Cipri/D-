#include <iostream>

int timer(int secunde)
{
    for (int i = secunde; i >= 0; i--)
    {
        std::cout << "Si in " << i << std::endl;
    }

    std::cout << "HAPPY NEW YEAR\n";

    return 0;
}
int main()
{
    timer(100);
    return 0;
}