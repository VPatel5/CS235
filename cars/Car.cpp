//
// Created by Patel on 2/21/21.
//

#include "Car.hpp"

using namespace std;

Car::Car(std::string name, std::string manufacturer, double top_speed, double weight, double mpg)
    : Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    setGarageSpaces(2);
    setNumWheels(4);
}