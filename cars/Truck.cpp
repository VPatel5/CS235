#include "Truck.hpp"

using namespace std;

Truck::Truck(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, double cargo_capacity) : Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    this->cargo_capacity_ = cargo_capacity;
    setGarageSpaces(8);
    setNumWheels(18);
}

bool Truck::add_cargo(double weight_of_cargo) {
    if (weight_of_cargo + weight_of_held_cargo_ <= cargo_capacity_) {
        weight_of_held_cargo_ += weight_of_cargo;
        return true;
    }
    return false;
}

bool Truck::clear() {
   weight_of_held_cargo_ = 0;
   return true;
}

double Truck::getCargoCapacity() const {
    return cargo_capacity_;
}

double Truck::getHeldCargoWeight() const {
    return weight_of_held_cargo_;
}