//
// Created by Patel on 3/9/21.
//

#include "Garage.hpp"
#include "Vehicle.hpp"

int main() {

    Garage<Vehicle> garage;

    Vehicle lambo;

    garage.add(lambo);
    garage.display();

    return 0;
}
