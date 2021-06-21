#include "Rectangle.hpp"
#include "iostream"

Rectangle::Rectangle(const int &width, const int &height) : Shape(width, height) {
    setEdges(4);

    // Populate 2D array with empty chars
    char **arr = new char*[height];
    for (int row = 0; row < height; row++)
    {
        arr[row] = new char[width];
        for (int col = 0; col < width; col++)
        {
            arr[row][col] = ' ';
        }
    }

    char ascii_counter = 48;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Put character if it is on the sides of the matrix left , right , top , bottom
            if (j == 0 || i == 0 || i == height - 1 || j == width - 1)
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

double Rectangle::getSurfaceArea() {
    // Area = L * W
    return getHeight() * getWidth();
}

double Rectangle::get3DVolume(const double &depth) {
    // Surface Area is area * depth
    return getSurfaceArea() * depth;
}
