#include "triangle.h"
#include <tuple>

namespace trianglelib
{

Triangle::Triangle(const double a, const double b, const double c) : mA{a}, mB{b}, mC{c} {}


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
}

bool Triangle::operator==(const Triangle& triangle) const
{

}

std::tuple<Triangle, Triangle, Triangle> Triangle::rotations()
{
    Triangle triangle1 = Triangle(this->mA, this->mB, this->mC);
    Triangle triangle2 = Triangle(this->mC, this->mA, this->mB);
    Triangle triangle3 = Triangle(this->mB, this->mC, this->mA);

    std::tuple<Triangle, Triangle, Triangle> rotatedTriangles{triangle1, triangle2, triangle3};

    return rotatedTriangles;
}




}