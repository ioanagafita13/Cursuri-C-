#include "Motor.h"

Motor::Motor(int caiPutere)
{
    this->caiPutere=caiPutere; //this este pointer catre Motor
}

Motor::~Motor()
{

}


void Motor::Start()
{
    std::cout<<"Car has started\n";
}