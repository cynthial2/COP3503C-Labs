// COP3503C: Lab 2 Pt 1 (Vehicle.cpp)
// Last edited: 9/12/22

#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"

// Default constructor, initializes variables to default values
Vehicle::Vehicle(std::string _make, std::string _model, int _year, float _price, int _mileage) {
    make = _make;
    model = _model;
    year = _year;
    price = _price;
    mileage = _mileage;
}

// Print out the vehicle's details in a single line:
// ex. 1973 Ford Mustang $9500 113000
void Vehicle::Display() {
    std::cout << year << " " << make << " " << model << " $" << price << " " << mileage << std::endl;
}

// Create and return a string in the form of "YEAR MAKE MODEL"
// ex. "1970 Ford Mustang"
std::string Vehicle::GetYearMakeModel() {
    return std::to_string(year) + " " + make + " " + model;
}

// Return the price
float Vehicle::GetPrice() {
    return price;
}