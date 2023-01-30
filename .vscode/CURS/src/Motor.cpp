#include "Motor.h"

Motor::Motor(int caiPutere)
{
    this->caiPutere = caiPutere; // this-> este un pointer ce arata catre motor
}

Motor::~Motor()
{
}

void Motor::start()
{
    std::cout << "Masina a pornit\n";
}