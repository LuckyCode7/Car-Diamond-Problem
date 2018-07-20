#pragma once
#include <stdexcept>
#include<iostream>

class InvalidAccelerate : public std::invalid_argument
{
public:
    InvalidAccelerate()
        : invalid_argument("not proper accelerate selected")
    {}
};

class Car
{
public:
    virtual void turnLeft();
    virtual void turnRight();
    virtual void brake();
    virtual void accelerate(int speed) const;
    virtual void refill() = 0;
    virtual ~Car() {}
};

