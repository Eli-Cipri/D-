#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr;
    int *a = &arr[0];
    std::cin >> arr;

    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr;
    }

    std::cout << "Numere " << arr << std::endl;

    return 0;
}