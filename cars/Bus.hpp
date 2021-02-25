#ifndef BUS_
#define BUS_

#include "Vehicle.hpp"

class Bus : public Vehicle {

private:
    double number_seats;

public:
    /**
      Calls the parameterized constructor Vehicle(...)
      Remember to set the number of seats.
      Uses setGarageSpaces function to set garage space to 4.
      Uses setNumWheels function to set wheels to 8.
   */
    Bus(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, size_t number_seats);

    /**
       returns the number of seats
    */
    size_t getNumSeats() const;
};


#endif //BUS_
