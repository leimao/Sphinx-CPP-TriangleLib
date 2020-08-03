#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>
//#include <tuple>

namespace trianglelib
{

class Triangle
{
public:

    Triangle(const double a, const double b, const double c);
    // Copy contructor
    Triangle(const Triangle& triangle);

    double getSideA() const;
    double getSideB() const;
    double getSideC() const;

    std::vector<Triangle> rotations() const;
    // std::tuple<Triangle, Triangle, Triangle> rotations() const;

    Triangle& operator=(const Triangle& triangle);
    bool operator==(const Triangle& triangle) const;

    bool isEquivalent(const Triangle& triangle) const;
    bool isSimilar(const Triangle& triangle) const;
    bool isEquilateral() const;
    bool isIsosceles() const;

    double perimeter() const;
    double area() const;

    Triangle scale(const double factor) const;

private:

    double mA, mB, mC;
};

}

#endif