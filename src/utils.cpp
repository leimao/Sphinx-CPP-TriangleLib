#include "triangle.h"
#include <stdexcept>
#include <iostream>

namespace trianglelib
{

Triangle createTriangle(const double a, const double b, const double c)
{
    try
    {
        return Triangle{a, b, c};
    }
    catch (std::runtime_error& error)
    {
        std::cerr << "Runtime error: " << error.what() << std::endl;
        return Triangle{1, 1, 1};
    }
}

bool isTriangle(const double a, const double b, const double c)
{
    try
    {
        Triangle triangle{a, b, c};
        return true;
    }
    catch (std::runtime_error& error)
    {
        return false;
    }
}


}