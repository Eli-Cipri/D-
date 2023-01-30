

// int k()
// {
//     int arr[0];
//     int n = sizeof(arr) / sizeof(arr[0]);
//      int consecutive = 0;
//     for (int i = 0; i < n - 1; i++) 
//     {
//         if (arr[i] + 1  == arr[i+1]) 
//         {
//             consecutive++;
//         }
//         else 
//         {
//             if (consecutive > 1) 
//             {
//                 for (int j = i - consecutive + 1; j <= i; j++) 
//                 {
//                     std::cout << arr[j] << " ";
//                 }
                
//             }
//         }
//     }
//     return consecutive;
// }

// void cons()
// {
//     int n;
//     std::cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) 
//     {
//         std::cin >> arr[i];
//     }
//     std::sort(arr, arr + n);
//     for (int i = 0; i < n; i++) 
//     {
//     std::cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     std::cout << "Numerele consecutive sunt " << k() << std::endl;

//     return 0;
// }


// int main() {
//     int n;
//     std::cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) 
//     {
//         std::cin >> arr[i];
//     }
//     std::sort(arr, arr + n);
//     int consecutive = 1; // initialize consecutive to 1
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] + 1 == arr[i+1]) 
//         {
//             consecutive++;

//         } 
         
//     }
//     std::cout << "Numerele consecutive sunt " << consecutive << std::endl;
//     if (consecutive >= 1) { // check for the last sequence of consecutive numbers
//         for (int j = n - consecutive; j < n; j++) {
//             std::cout << arr[j] << " ";
//         }
        
//     }
//     return 0;
// }





#include <iostream>
#include <algorithm>
#include <set>

int main() {
    int n, k;
    std::cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    bool cool = true;
    bool found = false;
    for (int i = 0; i < n - k + 1; i++) {
        cool = true;
        // check if sequence is cool
        std::sort(arr+i, arr + i+k);
        int max_val = arr[i];
        for (int j = i; j < i+k-1; j++) {
            if (arr[j] + 1 != arr[j + 1]) {
                cool = false;
                break;
            }
            if (arr[j] > max_val) {
                max_val = arr[j];
            }
        }
        if (cool) {
            found = true;
            std::set<int> distinct;
            for (int j = i; j < i+k; j++) {
                distinct.insert(arr[j]);
            }
            std::cout << max_val << std::endl;
            std::cout << "The ";
            for (int j = i; j < i+k; j++) {
                std::cout << arr[j] << " ";
            }
            std::cout << "sequence is cool." << std::endl;
            std::cout << "The maximum value in the sequence is " << max_val << std::endl;
            std::cout << "The distinct values are: ";
            for (int j = i; j < i+k; j++) {
                std::cout << arr[j] << " ";
            }
            break;
        }
    }
    if(!found) {
        std::set<int> distinct;
        for (int i = 0; i < k; i++) {
            distinct.insert(arr[i]);
        }
        std::cout << distinct.size() << std::endl;
        std::cout << "The sequence ";
        for (int i = 0; i < k; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "is not a cool sequence. The number of distinct values in the sequence is " << distinct.size() << std::endl;
        std::cout << "The distinct values are: ";
        for (auto x : distinct) {
            std::cout << x << " ";
        }
    }
    return 0;
}




