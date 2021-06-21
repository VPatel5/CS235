#include "Triangle.hpp"

Triangle::Triangle(const int &side) : Shape(side, side) {
    setEdges(3);

    // Populate 2D array with empty chars
    char **arr = new char*[side];
    for (int row = 0; row < side; row++)
    {
        arr[row] = new char[side];
        for (int col = 0; col < side; col++)
        {
            arr[row][col] = ' ';
        }
    }

    char ascii_counter = 48;

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            // If its on the left or bottom or on the hypotenuse which is when the row and column are same
            if (j == 0 || i == getHeight() - 1 || (j == i))
            {
                arr[i][j] = ascii_counter;

                // fix ascii_counter to wrap around after
                ascii_counter++;
                if (ascii_counter > 126) {
                    ascii_counter = 48;
                }
            }
        }
    }

    setDisplayChars(arr);
}

double Triangle::getSurfaceArea() {
    // Area = 1/2 * (length * width)
    return 0.5 * (getWidth() * getHeight());
}

double Triangle::get3DVolume(const double &depth) {
    // Volume is area * depth
    return getSurfaceArea() * depth;
}
