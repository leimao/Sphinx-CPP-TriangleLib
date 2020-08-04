#include "triangle.h"
#include <iostream>

using namespace trianglelib;

int main()
{
    double a{3}, b{4}, c{5};
    Triangle triangle{a, b, c};
    std::cout << "The area of the triangle, whose side lengths are " << a << ", " << b << ", and " << c << ", " << "is " << triangle.area() << "." << std::endl;
}