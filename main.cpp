#include "PetrolCar.h"
#include "ElectricCar.h"
#include "HybridCar.h"
#include <iostream>
int main()
{
    using std::cout;
    using std::endl;

    ElectricCar nissan(new ElectricEngine(130, 650));
    PetrolCar opel(new PetrolEngine(120, 1800, 6));
    HybridCar toyota(new PetrolEngine(80, 1400, 5), new ElectricEngine(100, 540));
    cout << endl;

    Car* car = &opel;
    try { car->accelerate(-50); }
    catch (InvalidAccelerate& ia)
    {
        std::cout << ia.what() << std::endl;
    }
    car->brake();
    car->refill();
    car->turnLeft();
    car->turnRight();
    cout << endl;

    car = &nissan;
    car->refill();
    car->accelerate(80);
    car->turnLeft();
    car->turnRight();
    car->brake();
    cout << endl;

    car = &toyota;
    car->accelerate(95);
    car->brake();
    car->refill();
    car->turnLeft();
    car->turnRight();
    cout << endl;
    
    return 0;
}
