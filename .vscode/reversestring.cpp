#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main()
{
    std::string mare;
    std::cin >> mare;
    reverse(mare.begin(), mare.end());
    std::cout << mare << std::endl;

    return 0;
}

// #include <algorithm>
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Please enter a  word: "; // ask for input
//     cin >> str;
//     random_shuffle(str.begin(), str.end());
//     cout << str << '\n';
// }