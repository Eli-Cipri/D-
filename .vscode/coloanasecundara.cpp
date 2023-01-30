#include <iostream>
// Tema : La exemplul din curs calculati suma pentru diagonala secundara
int main()
{
    int m_array[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    int diagSum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        diagSum2 += m_array[i][2 - i];
    }

    std::cout << "Suma diagonalei secundare este: " << diagSum2 << std::endl;

    return 0;
}