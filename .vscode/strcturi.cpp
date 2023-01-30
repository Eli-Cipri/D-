#include <iostream>

struct Point
{
    // pentru initializare
    Point(int x, int y)
    {
        x_coord = x;
        y_coord = y;
    }

    int x_coord;
    int y_coord;

    void goLeft()
    {
        x_coord--;
    }

    void goRight()
    {
        x_coord++;
    }

    void goUp()
    {
        y_coord++;
    }

    void goDown()
    {
        y_coord--;
    }

    void printCoord()
    {
        std::cout << "Coordonatele sunt " << x_coord << " " << y_coord << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    // int x1, y1;
    // x1 = 10;
    // y1 = 20;

    Point p1(10, 20);
    p1.printCoord();
    // p1.x_coord = 10;
    // p1.y_coord = 20;
    // std::cout << "Coordonatele punctului 1 sunt " << p1.x_coord << " " << p1.y_coord << std::endl;

    // int x2, y2;
    // x2 = 55;
    // y2 = 35;

    Point p2(30, 35);
    p2.printCoord();
    // p2.x_coord = 55;
    // p2.y_coord = 35;
    // std::cout << "Coordonatele punctului 2 sunt " << p2.x_coord << " " << p2.y_coord << std::endl;

    p1.x_coord = 69;
    p1.y_coord = 90;
    p1.printCoord();
    // std::cout << "Coordonatele punctului 1 sunt " << p1.x_coord << " " << p1.y_coord << std::endl;
    p1.goDown();
    p1.goLeft();
    p1.printCoord();

    // palimdorm un cuvant care se pot citi de la stanga la dreapta dar si la fel pentru dreapta la stanga de exemplu : "ana";
    // poate sa mai fie si aaccbbccaa chiar si 1001;

    return 0;
}