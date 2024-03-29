#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include "iostream"
#include "cmath"

class Shape {

public:
    // Parameterized Constructor; there is no default constructor
    Shape(const int &width, const int &height);

    // Getters
    int getEdges();
    int getWidth();
    int getHeight();
    char **getDisplayChars();

    // Setters
    void setEdges(const int& edges);
    void setWidth(const int& new_width);
    void setHeight(const int &new_height);
    void setDisplayChars(char **display);

    // Mutators
    void rotateRight();         //rotate by 90 degrees
    void rotateLeft();          //rotate by 90 degrees
    void reflect(char axis);    //reflect over x or y axis

    // Pure Virtual Methods (no implementation)
    virtual double getSurfaceArea() = 0;
    virtual double get3DVolume(const double& depth) = 0;

    // Display - //iterate through 2D array and print chars
    void display();

private:
    int width_;
    int height_;
    int edges_;
    char **display_chars_;
};


#endif //SHAPE_HPP_
