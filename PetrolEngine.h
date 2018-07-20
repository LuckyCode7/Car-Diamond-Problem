#pragma once
#include <stdexcept>

class InvalidGear : public std::invalid_argument
{
public:
    InvalidGear()
        : invalid_argument("not proper gear selected")
    {}
};

class PetrolEngine
{
public:
    PetrolEngine(int power, float capacity, int gears);
    void changeGear(int gear);
private:
    int power_;
    float capacity_;
    int gears_;
    int currentGear_;
};

