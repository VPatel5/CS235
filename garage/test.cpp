//
// Created by Patel on 3/9/21.
//

#include "Garage.hpp"
#include "Vehicle.hpp"
#include "iostream"

int main() {

    Garage<Vehicle> garage(12);

    Car c("Camry", "Toyota", 1,1,1);

    Car l("Lambo", "Toyota", 1,1,1);

    Motorcycle m("Z900", "Kawaski", 1,1,1);
    Truck t("Truc", "tradamax", 1, 1,1, 8);

    garage.add(c);
    garage.add(l);
    garage.add(t);
    garage.add(m);

    garage.display();

    std::cout << garage.getCurrentSize() << std::endl;

    std::cout << garage.contains(l) << ", " << garage.getFrequencyOf(t) << std::endl;

    garage.swap(m, l);
    garage.display();

    garage.clear();

    std::cout << garage.getCurrentSize() << std::endl;
    garage.display();

    return 0;
}
