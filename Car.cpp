#include <iostream>
#include "Car.h"

void Car::turnLeft()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::turnRight()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::brake()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::accelerate(int speed) const
{
    std::cout << __FUNCTION__ << "(" << speed << ")" << std::endl;
    if (speed < 0)
    {
        throw InvalidAccelerate();
    }
}
