#include "Bicicleta.h"

Bicicleta::Bicicleta()
{

}

Bicicleta::~Bicicleta()
{

}
void Bicicleta::accelerare()
{
    std::cout<<"Bicicleta accelereaza. "<<std::endl;
    viteza++;
}

void Bicicleta::franare()
{
    std::cout<<"Bicicleta franeaza. "<<std::endl;
    if(viteza>0)
    {
        viteza--;
    }
}