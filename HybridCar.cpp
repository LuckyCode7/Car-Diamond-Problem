#include "HybridCar.h"
#include <iostream>

HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng)
    : PetrolCar(petrolEng)
    , ElectricCar(electricEng)
{
    std::cout << __FUNCTION__ << std::endl;
}

void HybridCar::accelerate(int speed)
{
    std::cout << __FUNCTION__ << std::endl;
    PetrolCar::accelerate(speed);
}

void HybridCar::refill()
{
    std::cout << __FUNCTION__ << std::endl;
    ElectricCar::refill();
}