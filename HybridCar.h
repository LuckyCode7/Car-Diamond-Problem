#pragma once
#include "ElectricEngine.h"
#include "PetrolEngine.h"
#include "ElectricCar.h"
#include "PetrolCar.h"

class HybridCar : public PetrolCar, public ElectricCar
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar() {}
    void accelerate(int speed);
    void refill();
};

