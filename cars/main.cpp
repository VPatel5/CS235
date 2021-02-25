#include "Garage.hpp"
#include "Car.hpp"
#include "Truck.hpp"
#include "Bus.hpp"
#include "Motorcycle.hpp"

using namespace std;

int main() {
    Garage g(10);
    Car c("Camry", "Toyota", 123, 213, 132);
    Car lambo("Aventador", "Lamborghini", 123, 213, 132);
    Truck t("T680", "KENWORTH", 134, 314, 314, 1);
    Bus b("XD60", "Xcelsior", 143, 314, 341, 100);
    Motorcycle m("Z900", "KAWASAKI", 141, 114, 13);

    g.addVehicle(c);
    g.addVehicle(b);
    g.display();
    g.addVehicle(t);
    g.display();

    return 0;
}
