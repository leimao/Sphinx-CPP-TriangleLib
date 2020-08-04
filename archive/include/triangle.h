/** 
 * @mainpage Triangle Library Documentation
 * @section intro_sec Introduction
 * This is the Triangle C++ library for C++ Documentation Tutorial.
 * @section install_sec Installation
 *
 * @subsection install_dependencies Installing Dependencies
 * Do somethings ...
 * @subsection install_library Installing Library
 * Do somethings ...
 * @subsection install_example Installing Examples
 * Do somethings ...
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>

/**
 * @brief Triangle library namespace.
 * @author Lei Mao
 * @date 8/3/2020
 * @version 1.0
 * @note Hello Underworld!
 */
namespace trianglelib
{

/**
 * @brief Triangle class used for triangle manipulations.
 */
class Triangle
{
public:
    /**
     * Create a new Triangle object of side lengths 1, 1, and 1.
     * @brief Default constructor.
     * @see Triangle(const double a, const double b, const double c)
     * @see Triangle(const Triangle& triangle)
     */
    Triangle();
    /**
     * Create a new Triangle object from side lengths.
     * @brief Constructor.
     * @param a The Length of triangle side a.
     * @param b The Length of triangle side b.
     * @param c The Length of triangle side c.
     * @see Triangle()
     * @see Triangle(const Triangle& triangle)
     */
    Triangle(const double a, const double b, const double c);
    /**
     * Construct a new Triangle object from another Triangle object.
     * @brief Copy constructor.
     * @param triangle Another Triangle object.
     * @see Triangle()
     * @see Triangle(const double a, const double b, const double c)
     */
    Triangle(const Triangle& triangle);

    /**
     * @brief Get the length of side a.
     * @return The length of side a.
     */
    double getSideA() const;

    /**
     * @brief Get the length of side b.
     * @return The length of side b.
     */
    double getSideB() const;

    /**
     * @brief Get the length of side c.
     * @return The length of side c.
     */    
    double getSideC() const;

    /**
     * @brief Get a vector of the Triangle objects whose side lengths have been rotated.
     * @return A vector of Triangle objects.
     */
    std::vector<Triangle> rotations() const;

    /**
     * @brief Assignment overloading.
     * @param triangle Another Triangle object.
     * @return The reference to the current Triangle object.
     */ 
    Triangle& operator=(const Triangle& triangle);
    
    /**
     * @brief Equivalence overloading.
     * @param triangle another Triangle object.
     * @return Whether the two Triangle objects are the same.
     */     
    bool operator==(const Triangle& triangle) const;

    /**
     * @brief Determine if the Triangle object is equivalent to the other.
     * @param triangle Another Triangle object.
     * @return Whether the two Triangle objects are the same.
     */ 
    bool isEquivalent(const Triangle& triangle) const;
    /**
     * @brief Determine if the Triangle object is similar to the other.
     * @param triangle Another Triangle object.
     * @return Whether the two Triangle objects are similar.
     */ 
    bool isSimilar(const Triangle& triangle) const;
    /**
     * @brief Determine if the Triangle object is quilateral.
     * @return Whether the Triangle objects is equilateral.
     */ 
    bool isEquilateral() const;
    /**
     * @brief Determine if the Triangle object is isosceles.
     * @return Whether the Triangle objects is isosceles.
     */ 
    bool isIsosceles() const;

    /**
     * @brief Get the perimeter of the Triangle object.
     * @return The perimeter of the Triangle object.
     */ 
    double perimeter() const;
    /**
     * @brief Get the area of the Triangle object.
     * @return The area of the Triangle object.
     */ 
    double area() const;

    /**
     * @brief Create a new scaled Triangle object.
     * @return A new scaled Triangle object.
     */ 
    Triangle scale(const double factor) const;

private:
    /**
     * Lengths of side a, b, and c.
     */ 
    double mA, mB, mC;
};

/**
 * @brief Create a Triangle object
 * @param a The Length of triangle side a.
 * @param b The Length of triangle side b.
 * @param c The Length of triangle side c.
 * @return A Triangle object.
 */
Triangle createTriangle(const double a, const double b, const double c);

/**
 * @brief Determine if the three lengths provided could form a valid Triangle object.
 * @param a The Length of triangle side a.
 * @param b The Length of triangle side b.
 * @param c The Length of triangle side c.
 * @return true if the three lengths provided could form a valid Triangle object.
 * @return false if the three lengths provided could not form a valid Triangle object.
 */
bool isTriangle(const double a, const double b, const double c);

}

#endif