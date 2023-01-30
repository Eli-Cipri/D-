#include <iostream>
#include <string>

int suma_array(int arr[], const int dimensiune) // poti sa faci si cu int si cu const , folosesti const ca sa stie ca dimensiunea nu este modificabila in cazul in care se uita cineva peste codul tau.
{
    int sum = 0;
    // dimensiune = 100; // aici va da eroare deoarece const in dimensiune este o variabila fixa , care nu se schimba.
    for (int i = 0; i < dimensiune; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void print_users(std::string users[], const int dimensiune)
{
    for (int i = 0; i < dimensiune; i++)
    {
        if (users[i] != "") // sintaxa de ferificare daca stringul este gol.
        {
            std::cout << users[i] << std::endl;
        }
    }
}

int main()
{
    const int array_size = 5;
    // sintaxa : prima data tipul de date , numele [dimensiunea arrayu-lui]
    int my_array[array_size] = {1, 2, 3, 4, 5};
    // my_array[0] = 1;// accesare si modificare array prin index
    std::cout << my_array[0] << std::endl; // pentru accesare a arrayu-lui
    std::cout << my_array[4] << std::endl;

    my_array[0] = 99;                      // rezultatul da oodata 113 pentru ca ii schimbam valoarea si se aduna cu 99 , dar daca comentezi linia 22 suma va fi 15;
    std::cout << my_array[0] << std::endl; // pentru accesare a arrayu-lui
    // my_array[5] = 77; nu faceti asa ceva;

    for (int i = 0; i < array_size; i++)
    {
        std::cout << my_array[i] << std::endl;
    }

    std::cout << "Suma este " << suma_array(my_array, array_size) << std::endl;

    std::string lista_utilizatori[array_size] = {"Sergiu", "Mihai"};

    // print_users(lista_utilizatori, array_size);

    return 0;
}