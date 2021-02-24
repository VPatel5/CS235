//
// Created by Patel on 2/21/21.
//

#ifndef MOTORCYCLE_
#define MOTORCYCLE_

#include "Vehicle.hpp"

class Motorcycle : public Vehicle {

public:
    /**
      Calls the parameterized constructor Vehicle(...)
      Uses setGarageSpaces function to set garage space to 1.
      Uses setNumWheels function to set wheels to 2.
   */
    Motorcycle(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);

};


#endif //MOTORCYCLE_
