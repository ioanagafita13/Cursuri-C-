#include "Car.h"

Car::Car(int cp, std::string culoare, int anul, int km):
m_motor(cp),
m_culoare(culoare),
m_km(km),
anulFabricatiei(anul)
{

}

Car::~Car()
{

}

void Car::printCarInfo()
{
    std::cout<<"Car info:\n";
    std::cout<<"Car color: "<<m_culoare<<std::endl;
    std::cout<<"Km: "<<m_km<<std::endl;
    std::cout<<"Make year: "<<anulFabricatiei<<std::endl;
    std::cout<<"Horse Power: "<<m_motor.getHP()<<std::endl;
}

void Car::Drive(int km)
{
    m_motor.Start();
    m_km+=km;
    std::cout<<"Drived for "<<km<<std::endl;
}
