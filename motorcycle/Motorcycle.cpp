#include "Motorcycle.hpp"

#include "iostream"
#include "string"

using namespace std;

Motorcycle::Motorcycle() {
    srand(time(NULL));
    int randomNumber = rand() % 3;
    this->brand_ = bike_details::bike_brand(randomNumber);
    this->curr_acceleration_ = bike_details::NONE;
    this->curr_speed_ = 0;
    this->curr_direction_ = 0;
    this->seat_height_ = 0;
    this->distance_traveled_ = 0;
}

Motorcycle::Motorcycle(int kind_of_bike) {
    this->brand_ = bike_details::bike_brand(kind_of_bike);
    this->curr_acceleration_ = bike_details::NONE;
    this->curr_speed_ = 0;
    this->curr_direction_ = 0;
    this->seat_height_ = 0;
    this->distance_traveled_ = 0;
}

std::string Motorcycle::getDirection() {
    if (curr_direction_ == 0) return "East";
    if (curr_direction_ == 90) return "North";
    if (curr_direction_ == 180) return "West";
    if (curr_direction_ == 270) return "South";
    if (curr_direction_ > 0 && curr_direction_ < 90) return "Northeast";
    if (curr_direction_ > 90 && curr_direction_ < 180) return "Northwest";
    if (curr_direction_ > 180 && curr_direction_ < 270) return "Southwest";
    if (curr_direction_ > 270 && curr_direction_ < 360) return "Southeast";
    return "Out of bounds";
}

std::string Motorcycle::getBikeType() {
    switch (this->brand_) {
        case bike_details::DUCATI:
            return "DUCATI";
        case bike_details::HARLEY_DAVIDSON:
            return "HARLEY_DAVIDSON";
        case bike_details::KAWASAKI:
            return "KAWASAKI";
        default:
            return "YAMAHA";
    }
}

float Motorcycle::getSpeed() {
    return this->curr_speed_;
}

float Motorcycle::getDistanceTraveled() {
    return this->distance_traveled_;
}

int Motorcycle::getIntensity() {
    return this->curr_acceleration_;
}

void Motorcycle::turn(float degrees) {
    if (degrees < -360) degrees = -360;
    if (degrees > 360) degrees = 360;
    this->curr_direction_ += degrees;
}

void Motorcycle::updateSpeed() {
    this->curr_speed_ =  ((this->curr_acceleration_) / 8) + ((this->brand_) * 17.64);
}

void Motorcycle::accelerate() {
    if (this->curr_acceleration_ == bike_details::HIGH) return;

    if (this->curr_acceleration_ == bike_details::NONE) this->curr_acceleration_ = bike_details::LOW;
    else if (this->curr_acceleration_ == bike_details::LOW) this->curr_acceleration_ = bike_details::MEDIUM;
    else if (this->curr_acceleration_ == bike_details::MEDIUM) this->curr_acceleration_ = bike_details::HIGH;

    this->updateSpeed();
}

void Motorcycle::brake() {
    if (this->curr_acceleration_ == bike_details::NONE) return;

    if (this->curr_acceleration_ == bike_details::HIGH) this->curr_acceleration_ = bike_details::MEDIUM;
    else if (this->curr_acceleration_ == bike_details::MEDIUM) this->curr_acceleration_ = bike_details::LOW;
    else if (this->curr_acceleration_ == bike_details::LOW) this->curr_acceleration_ = bike_details::NONE;

    this->updateSpeed();
}

float Motorcycle::ride(float duration) {
    if (duration <= 0) return 0;

    this->distance_traveled_ += (this->curr_speed_ * duration);
    return (this->curr_speed_ * duration);
}

int main() {

    Motorcycle motorcycle = *new Motorcycle(1);
    cout << "Type: " << motorcycle.getBikeType() << endl;
    cout << "Direction: " << motorcycle.getDirection() << endl;
    cout << "Acceleration: " << motorcycle.getIntensity() << endl;
    cout << "Speed: " << motorcycle.getSpeed() << endl;
    cout << "Distance Traveled: " << motorcycle.getDistanceTraveled() << endl;

    return 0;
}


