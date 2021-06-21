#include "Rectangle.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"

using namespace std;

int main() {

    Rectangle rectangle(6, 12);
    rectangle.display();
    rectangle.rotateRight();
    rectangle.display();

    return 0;
}
