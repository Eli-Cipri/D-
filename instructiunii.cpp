#include <iostream> // Instructiunii Decizionale

bool checkLimit(int limit)
{
    const int maxLimit = 20;
    if (limit > maxLimit)
    {
        return false;
    }

    return true;
}

int main()
{
    // poti sa nu folosesti { } dar funtioneaza pentru o singura linie de cod.
    // bool isValid = false; // daca ai pune fals in loc de true nu ar printa nimic in terminal.

    int value = 25;
    bool isValid = true;
    // || inseamna ori.
    // && inseamna si.
    if (isValid)
    {
        std::cout << "Acces granted\n";
        if (checkLimit(value))
            std::cout << "You are INNN\n";
    }
    // if (checkLimit(value) && !isValid) // la fel cu if(isValid == true), daca pui " ! " inainte de isValid il ia ca si not true
    // //  poti folosi si if(value <= 20) este valid.
    // {
    //     std::cout << "Acces granted\n";
    // }
    else
    {
        std::cout << "Acces not granted\n";
    }
    std::cout << "Finishing\n";

    int time = 9;
    if (time < 10)
    {
        std::cout << "Good Morning\n";
    }
    else if (time <= 20)
    {
        std::cout << "Good day\n";
    }
    else
    {
        std::cout << "Good Evening\n";
    }

    std::cout << "Introduceti operatiunea: \n";
    std::cout << "+ Adunare , - Scadere , * Inmultirea\n";
    char op;
    std::cin >> op;
    std::cout << "Intorduceti valori\n";
    int a, b;
    std::cin >> a;
    std::cin >> b;

    switch (op)
    {
    case '+':
        std::cout << "Suma este: " << a + b << std::endl;
        break;
    case '-':
        std::cout << "Scaderea este: " << a - b << std::endl;
        break;
    case '*':
        std::cout << "Inmultirea este: " << a * b << std::endl;
    default:
        std::cout << "Operatiunea " << op << " nu este suportata\n";
        break;
    }

    // la switch folosesti break in loc de retrun ca sa nu ti se opreasca codul.

    return 0;
}
