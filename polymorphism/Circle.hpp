#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include "Shape.hpp"

class Circle : public Shape {
public:
    //Parameterized constructor: takes diameter as width or height.
    Circle(const int& diameter);

    double getSurfaceArea();
    double get3DVolume(const double& depth);
};


#endif //CIRCLE_HPP_
