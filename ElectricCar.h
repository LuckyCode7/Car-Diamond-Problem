#pragma once
#include "ElectricEngine.h"
#include "Car.h"

class ElectricCar : virtual public Car
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar() {}
    void refill();
private:
    void charge();
    ElectricEngine* engine_;
};

