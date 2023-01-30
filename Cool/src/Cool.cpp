#include "Cool.h"

Cool::Cool()
{

}

Cool::~Cool()
{

}

int Cool::setN() 
{
  int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int consecutive = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] + 1 == arr[i + 1]) {
            consecutive++;
        }
        else {
            if (consecutive > 1) {
                for (int j = i - consecutive + 1; j <= i; j++) {
                    std::cout << arr[j] << " ";
                }
                std::cout << std::endl;
            }
            consecutive = 1;
        }
    }
    return m_N; 
}
   


 

