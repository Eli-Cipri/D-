#include <iostream>
/*
Ti se da un porgram ce va printa toate numerele de la 0 la 20
Schimbati codul pentru a printa doar multipli de 3

int main()
{
//schimba
int num = 0 ;
while(num <=20){
cout << num << endl;
num+=1;

}
*/
int main()
{
    // schimba
    int num = 0;
    while (num <= 20)
    {
        std::cout << num << std::endl;
        num += 3;
    }
    return 0;
}