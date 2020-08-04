#include "triangle.h"
#include <vector>
#include <cmath>
#include <stdexcept>

namespace trianglelib
{

Triangle::Triangle(const double a, const double b, const double c) : mA{a}, mB{b}, mC{c} 
{
    if (this->mA <= 0 || this->mB <= 0 || this->mC <= 0)
    {
        throw std::runtime_error{"All the Triangle side lengths should be positive!"};
    }
}

Triangle::Triangle(const Triangle& triangle)
{
    this->mA = triangle.getSideA();
    this->mB = triangle.getSideB();
    this->mC = triangle.getSideC();
}

double Triangle::getSideA() const
{
    return this->mA;
}

double Triangle::getSideB() const
{
    return this->mB;
}

double Triangle::getSideC() const
{
    return this->mC;
}

Triangle& Triangle::operator=(const Triangle& triangle)
{
    this->mA = triangle.getSideA();
    this->mB = triangle.getSideB();
    this->mC = triangle.getSideC();

    return *this;
}

bool Triangle::operator==(const Triangle& triangle) const
{
    std::vector<Triangle> rotatedTriangles = triangle.rotations();

    for (const Triangle& rotatedTriangle : rotatedTriangles)
    {
        if (this->getSideA() == triangle.getSideA() && this->getSideB() == triangle.getSideB() && this->getSideC() == triangle.getSideC())
        {
            return true;
        }
    }

    return false;
}

std::vector<Triangle> Triangle::rotations() const
{
    Triangle triangle1 = Triangle(this->mA, this->mB, this->mC);
    Triangle triangle2 = Triangle(this->mC, this->mA, this->mB);
    Triangle triangle3 = Triangle(this->mB, this->mC, this->mA);

    std::vector<Triangle> rotatedTriangles{triangle1, triangle2, triangle3};

    return rotatedTriangles;
}

bool Triangle::isEquivalent(const Triangle& triangle) const
{
    return (*this == triangle);
}

bool Triangle::isSimilar(const Triangle& triangle) const
{
    std::vector<Triangle> rotatedTriangles = triangle.rotations();

    for (const Triangle& rotatedTriangle : rotatedTriangles)
    {
        if ((this->getSideA() / triangle.getSideA() == this->getSideB() / triangle.getSideB()) && (this->getSideA() / triangle.getSideA() == this->getSideC() / triangle.getSideC()))
        {
            return true;
        }
    }

    return false;
}

bool Triangle::isEquilateral() const
{
    return ((this->getSideA() == this->getSideB()) && (this->getSideA() == this->getSideC()));
}

bool Triangle::isIsosceles() const
{
    return ((this->getSideA() == this->getSideB()) || (this->getSideA() == this->getSideC()) || (this->getSideB() == this->getSideC()));
}

double Triangle::perimeter() const
{
    return (this->getSideA() + this->getSideB() + this->getSideC());
}

double Triangle::area() const
{
    // Heron's formula
    double perimeter = this->perimeter();
    double p = perimeter / 2;
    return std::sqrt(p * (p - this->getSideA()) * (p - this->getSideB()) * (p - this->getSideC()));
}

Triangle Triangle::scale(const double factor) const
{
    double a = this->getSideA() * factor;
    double b = this->getSideB() * factor;
    double c = this->getSideC() * factor;

    return Triangle{a, b, c};
}

}