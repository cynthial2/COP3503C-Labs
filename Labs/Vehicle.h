// COP3503C: Lab 2 Pt 1 (Vehicle.h)
// Last edited: 9/12/22

#include <iostream>
#pragma once

class Vehicle {

    std::string make;
    std::string model;
    unsigned int year;
    float price;
    unsigned int mileage;

public:
    // Default constructor, initializes variables to default values
    Vehicle(std::string _make = "COP3503", std::string _model = "Rust Bucket", int _year = 1900, float _price = 0, int _mileage = 0);

    // Print out the vehicle's details in a single line:
    // ex. 1973 Ford Mustang $9500 113000
    void Display();

    // Create and return a string in the form of "YEAR MAKE MODEL"
    // ex. "1970 Ford Mustang"
    std::string GetYearMakeModel();

    // Return the price
    float GetPrice();

};
