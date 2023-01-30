#include <iostream>

int small(int arr[], int dimensiune)
{
    int min = arr[0];
    for (int i = 0; i < dimensiune; i++)
    {
        if (arr[i] <= min)
            ;
    }

    return min;
}

int main()
{
    int arr[4] = {3, 7, 10, -5};
    int dimensiune = sizeof(arr) / sizeof(int);

    std::cout << small(arr, dimensiune);

    return 0;
}