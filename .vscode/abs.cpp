#include <iostream>
#include <cstdlib>

int main()
{

    const int x[] = {-2, -9};
    int size = sizeof(x) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        std::abs(x[i]);
        std::cout << abs(x[i]) << std::endl;
    }

    return 0;
}