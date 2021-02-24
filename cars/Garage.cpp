#include "Garage.hpp"
#include "cmath"
#include "Car.hpp"
#include "Truck.hpp"
#include "iostream"

namespace null
{
    Vehicle v;
}

using namespace std;

Garage::Garage(size_t capacity) {
    capacity_ = capacity;
    num_vehicles_ = 0;

    arr_ = new Vehicle[capacity];
}

void Garage::arrange() {
    int new_current_length = 0;
    int amount_of_null = 0;
    Vehicle *newArr_ = new Vehicle[capacity_];

    // Add all non null cars to new array
    for (int i = 0; i < current_length_; i++) {
        if (arr_[i] != null::v) {
            newArr_[new_current_length] = arr_[i];
            new_current_length++;
            amount_of_null += arr_[i].getSpaces() - 1;
        }
    }

    // Add all null cars to new array
    for (int i = 0; i < amount_of_null; i++) {
        newArr_[new_current_length] = null::v;
        new_current_length++;
    }

    // Replace old array with new arranged
    arr_ = newArr_;
    current_length_ = new_current_length;
}

bool Garage::addVehicle(Vehicle to_add) {
    if (isFull()) return false;
    if (num_vehicles_ + to_add.getSpaces() > capacity_) return false;

    // Add new car
    arr_[current_length_] = to_add;
    current_length_++;

    // Fill spaces
    for (int i = 0; i < to_add.getSpaces() - 1; i++) {
        arr_[current_length_] = null::v;
        current_length_++;
    }

    num_vehicles_++;

    return true;
}

bool Garage::removeVehicle(Vehicle to_remove) {
    if (num_vehicles_ == 0) return false;

    for (int i = 0; i < current_length_; i++) {
        Vehicle v = arr_[i];
        if (v == to_remove) {
            arr_[i] = null::v;
            break;
        }
    }

    num_vehicles_--;

    arrange();

    return true;
}

bool Garage::swapVehicles(Vehicle swap_in, Vehicle swap_out) {
    bool result = false;

    removeVehicle(swap_out);

    result = addVehicle(swap_in);

    return result;
}

bool Garage::isFull() const {
    return current_length_ >= capacity_;
}

void Garage::display() const {
    for (int i = 0; i < current_length_; i++) {
        Vehicle v = arr_[i];
        if (v != null::v) cout << v.getManufacturer() + " " << v.getName() << endl;
    }
}