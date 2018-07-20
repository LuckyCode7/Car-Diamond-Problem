#pragma once
#include "PetrolEngine.h"
#include  "Car.h"

class PetrolCar : virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar() {}
    void refill();

private:
    void refuel();
    PetrolEngine* engine_;
};

