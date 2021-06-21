#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_

#include "Shape.hpp"

class Triangle : public Shape {

public:
    /* Parameterized constructor; takes in side length as a parameter, iterates
   through the 2D array to draw the right triangle using ASCII chars */
    Triangle(const int &side);

    double getSurfaceArea();
    double get3DVolume(const double &depth);

};


#endif //TRIANGLE_HPP_
