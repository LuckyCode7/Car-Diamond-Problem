#include "PetrolCar.h"
#include <iostream>

PetrolCar::PetrolCar(PetrolEngine* engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolCar::refill()
{
    refuel();
}

void PetrolCar::refuel()
{
    std::cout << __FUNCTION__ << std::endl;
}