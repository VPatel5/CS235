cmake_minimum_required(VERSION 3.17)
project(HunterCollege)

set(CMAKE_CXX_STANDARD 17)

add_executable(Motorcycle motorcycle/Motorcycle.cpp motorcycle/Motorcycle.hpp)
add_executable(Cars cars/Vehicle.cpp cars/Vehicle.hpp cars/Garage.cpp cars/Garage.hpp cars/Car.cpp cars/Car.hpp cars/Motorcycle.cpp cars/Motorcycle.hpp cars/Bus.cpp cars/Bus.hpp cars/Truck.cpp cars/Truck.hpp cars/Vehicle.cpp cars/main.cpp)
add_executable(Garage garage/test.cpp garage/Garage.hpp garage/Object.hpp garage/Vehicle.hpp)
add_executable(LinkedLists linkedlists/main.cpp)