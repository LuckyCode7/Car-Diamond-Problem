#include "ElectricEngine.h"
#include <iostream>

ElectricEngine::ElectricEngine(int power, int batteryCapacity)
    : power_(power)
    , batteryCapacity_(batteryCapacity)
{
    std::cout << __FUNCTION__ << std::endl;
}

void ElectricEngine::setPower(int power)
{
    std::cout << __FUNCTION__ << std::endl;
    if (power < 0)
    {
        std::cerr << "Power cannot be negative" << std::endl;
        return;
    }
    power_ = power;
}

void ElectricEngine::setbatteryCapacity(int batteryCapacity)
{
    std::cout << __FUNCTION__ << std::endl;
    if (batteryCapacity < 0)
    {
        std::cerr << "Battery capacity cannot be negative" << std::endl;
        return;
    }
    batteryCapacity_ = batteryCapacity;
}

int ElectricEngine::getPower() const
{
    std::cout << __FUNCTION__ << std::endl;
    return power_;
}

int ElectricEngine::getBatteryCapacity() const
{
    std::cout << __FUNCTION__ << std::endl;
    return batteryCapacity_;
}
