#pragma once
#include "iostream"

class Circle
{
private:
    /* data */
    unsigned int m_radius;
public:
    Circle(unsigned int radius): m_radius(radius) {};
    ~Circle() = default;

    void setRadius(const unsigned int& radius)
    {
        this->m_radius = radius;

    }
    const unsigned int& getRadius()
    {
        return this->m_radius;
    }
};

class Utility
{
private:
    /* data */
public:
    Utility(/* args */) = default;
    ~Utility() = default;

    double calculateArea(Circle& circleObj)
    {
        auto r = circleObj.getRadius();
        return r*r*3.14; 
    }
};

