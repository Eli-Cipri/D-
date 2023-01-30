#include <iostream>
#include <string>

int main()
{
    std::string rearanjare = "abcde";
    for(int i = 0 ; i < rearanjare.size(); i++)
    {
       rearanjare[i] = i + 1;
    }
    std::cout << rearanjare << std::endl;
    return 0;
}
