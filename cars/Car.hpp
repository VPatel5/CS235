#ifndef CAR_
#define CAR_

#include "Vehicle.hpp"

class Car : public Vehicle {

public:
    /**
      Calls the parameterized constructor Vehicle(...)
      Uses setGarageSpaces function to set garage space to 2.
      Uses setNumWheels function to set wheels to 4.
   */
   Car(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);

};


#endif //CAR_
