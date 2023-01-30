#include <iostream>
#include <vector>
#include <string>
// array multidimensional

void printUsers(std::vector<std::string> users)
{
    for (int i = 0; i < users.size(); i++)
    {
        std::cout << users[i] << std::endl; // aici in loc de users[i] poti folosi si users.at(i) este si mai sigur pentru ca da eroare cand treci peste limite
    }
}
int main()
{
    // sintaxa pentru vector este :  std::vector<tipdata> nume_vector;

    std::vector<int> lista; // vectorul este dinamic ca si dimensiune
    lista.push_back(10);    // pentru adaugare de dimensiune folosim "push_back"
    std::cout << "Dimensiunea listei mele este : " << lista.size() << std::endl;
    std::cout << "Capacitate listei mele este : " << lista.capacity() << std::endl;

    lista.push_back(10);
    std::cout << "Dimensiunea listei mele este : " << lista.size() << std::endl;
    std::cout << "Capacitate listei mele este : " << lista.capacity() << std::endl;

    // shrink_to_fit

    std::vector<std::string> utilizatori;
    utilizatori.push_back("Sergiu");
    utilizatori.push_back("Andrei");
    printUsers(utilizatori);
    utilizatori.push_back("Stefan");
    printUsers(utilizatori);

    utilizatori.pop_back(); // pop_back sterge ultimua intrare adica pe "Stefan"
    printUsers(utilizatori);
    // sintaxa pentru un multiarray este tip data [d1 size][d2 size] .... [dn size]
    int m_array[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    std::cout << m_array[0][2]; // 0 si 2 reprezinta indexul lui m-array adica incepe de la 00 = 1 , 01= 2, 02= 3;
    // vrem sa calculam suma de pe diagonala principala care este 1 , 5 , 9
    int diagSum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                diagSum += m_array[i][j];
            }
        }
    }

    diagSum = 0;
    for (int i = 0; i < 3; i++)
    {
        diagSum += m_array[i][i];
    }

    std::cout << "Suma diagonalei principale este :" << diagSum << std::endl;

    int x[2][3] =
        {
            {2, 3},
            {8, 9, 10}};

    // EXEMPLU de vector
    std::string Nume = "sergiu";
    Nume = "George";
    for (int i = 0; i < Nume.size(); i++)
    {
        std::cout << Nume[i] << std::endl; // se mai poate folosi si ".at(i)" pentru ca este similar cu Nume[i] doar ca mai safe.
    }

    std::vector<char> NumeSimilar;

    return 0;
}