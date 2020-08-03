/**
  A fluffy feline
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>

namespace trianglelib
{

/**
  Triangle class used for triangle manipulations.
*/
class Triangle
{
public:
    /**
      Constructor.
    */
    Triangle(const double a, const double b, const double c);
    /**
      Copy constructor.
    */
    Triangle(const Triangle& triangle);

    /**
      Get the length of side a.
    */
    double getSideA() const;

    /**
      Get the length of side b.
    */
    double getSideB() const;

    /**
      Get the length of side c.
    */    
    double getSideC() const;

    /**
      Get a vector of the Triangle objects whose side lengths have been rotated.
    */ 
    std::vector<Triangle> rotations() const;

    /**
      Assignment overloading.
    */ 
    Triangle& operator=(const Triangle& triangle);
    /**
      Equivalence overloading.
    */ 
    bool operator==(const Triangle& triangle) const;

    /**
      Determine if the Triangle object is equivalent to the other.
    */ 
    bool isEquivalent(const Triangle& triangle) const;
    /**
      Determine if the Triangle object is similar to the other.
    */ 
    bool isSimilar(const Triangle& triangle) const;
    /**
      Determine if the Triangle object is quilateral.
    */ 
    bool isEquilateral() const;
    /**
      Determine if the Triangle object is isosceles.
    */ 
    bool isIsosceles() const;

    /**
      Get the perimeter of the Triangle object.
    */ 
    double perimeter() const;
    /**
      Get the area of the Triangle object.
    */ 
    double area() const;

    /**
      Create a new scaled Triangle object.
    */ 
    Triangle scale(const double factor) const;

private:

    /**
      Lengths of side a, b, and c.
    */ 
    double mA, mB, mC;
};

}

#endif