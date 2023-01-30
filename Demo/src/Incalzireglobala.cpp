#include "Incalzireglobala.h"

int temperaturi(int num_temp[], const int dim)
{
    int min = std::abs(num_temp[0]);

    for (int i = 1; i < dim; i++)
    {
        if (std::abs(num_temp[i]) < min)
        {
            min = num_temp[i];
        }
        else if (std::abs(num_temp[i]) == std::abs(min))
        {
            if (num_temp[i] > min)
            {
                min = num_temp[i];
            }
        }
    }

    return min;
}

int main()
{
    int arr[] = {4, 9, 1, -1, 0};
    std::cout << temperaturi(arr, 5);

    return 0;
}