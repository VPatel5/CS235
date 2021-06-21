#include "Shape.hpp"

Shape::Shape(const int &width, const int &height) : width_{width}, height_{height}, edges_{0}, display_chars_{nullptr} {}

int Shape::getEdges() {
    return edges_;
}

int Shape::getWidth() {
    return width_;
}

int Shape::getHeight() {
    return height_;
}

char **Shape::getDisplayChars() {
    return display_chars_;
}

void Shape::setEdges(const int &edges) {
    this->edges_ = edges;
}

void Shape::setWidth(const int &new_width) {
    this->width_ = new_width;
}

void Shape::setHeight(const int &new_height) {
    this->height_ = new_height;
}

void Shape::setDisplayChars(char **display) {
    this->display_chars_ = display;
}

void Shape::rotateRight() {
    // To rotate you swap the width and height
    int w = getHeight();
    int h = getWidth();

    // Create a new dynamic 2d array
    char **arr = new char *[h];
    for (int row = 0; row < h; row++)
    {
        arr[row] = new char[w];
        for (int col = 0; col < w; col++)
        {
            // To rotate left you swap the col to row and edit the new row
            arr[row][col] = display_chars_[w - col - 1][row];
        }
    }

    // Delete old array
    delete display_chars_;
    display_chars_ = nullptr;

    display_chars_ = arr;

    // Sets new values because we swapped them
    setHeight(h);
    setWidth(w);
}

void Shape::rotateLeft() {
    // To rotate you swap the width and height
    int w = getHeight();
    int h = getWidth();

    // Create a new dynamic 2d array
    char **arr = new char *[h];
    for (int row = 0; row < h; row++)
    {
        arr[row] = new char[w];
        for (int col = 0; col < w; col++)
        {
            // To rotate left you swap the row to col and edit the new col
            arr[row][col] = display_chars_[col][h - row - 1];
        }
    }

    // Delete old array
    delete display_chars_;
    display_chars_ = nullptr;

    display_chars_ = arr;

    // Sets new values because we swapped them
    setHeight(h);
    setWidth(w);
}

void Shape::reflect(char axis) {
    int w = width_;
    int h = height_;

    char tmp;

    if (axis == 'y')
    {
        for (int row = 0; row < h; row++) {
            for (int col = 0; col < w / 2; col++) {
                tmp = display_chars_[row][col];
                display_chars_[row][col] = display_chars_[row][w - 1 - col];
                display_chars_[row][w - 1 - col] = tmp;
            }
        }
    }
    else {
        for (int row = 0; row < h/2; row++) {
            for (int col = 0; col < w; col++) {
                tmp = display_chars_[row][col];

                display_chars_[row][col] = display_chars_[h - 1 - row][col];
                display_chars_[h - 1 - row][col] = tmp;
            }
        }
    }
}

void Shape::display() {
    for (int row = 0; row < getHeight(); row++)
    {
        for (int col = 0; col < getWidth(); col++)
        {
            if (col != getWidth() - 1) {
                std::cout << display_chars_[row][col] << " ";
            } else {
                std::cout << display_chars_[row][col];
            }
        }
        std::cout << std::endl;
    }
}



