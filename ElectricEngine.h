#pragma once

class ElectricEngine
{
public:
    ElectricEngine(int power, int batteryCapacity);
    void setPower(int power);
    void setbatteryCapacity(int batteryCapacity_);
    int getPower() const;
    int getBatteryCapacity() const;
private:
    int power_;
    int batteryCapacity_;
};

