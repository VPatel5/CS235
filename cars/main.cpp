//
// Created by Patel on 2/24/21.
//

#include "Garage.hpp"
#include "Car.hpp"
#include "Truck.hpp"
#include "Bus.hpp"
#include "Motorcycle.hpp"

using namespace std;

int main() {
    Garage g;
    Car c("Camry", "Toyota", 123, 213, 132);
    Car lambo("Aventador", "Lamborghini", 123, 213, 132);
    Truck t("T680", "KENWORTH", 134, 314, 314, 1);
    Bus b("XD60", "Xcelsior", 143, 314, 341, 100);
    Motorcycle m("Z900", "KAWASAKI", 141, 114, 13);

    g.addVehicle(c);
    g.addVehicle(b);
    g.display();
    cout << g.swapVehicles(lambo, c) << endl;
    g.display();
    cout << g.swapVehicles(m, b) << endl;
    g.display();
    cout << g.swapVehicles(t, lambo) << endl;
    g.display();

    return 0;
}
