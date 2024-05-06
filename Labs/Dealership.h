// COP3503C: Lab 2 Pt 3 (Dealership.h)
// Last edited: 9/13/22

#include <iostream>
#include <vector>
#include <string>
#include "Vehicle.h"
#include "Showroom.h"
#pragma once

class Dealership {

    std::string name;
    unsigned int capacity;
    std::vector<Showroom> showroom_list;

public:

    // Constructor
    Dealership(std::string _name = "Generic Dealership", unsigned int _capacity = 0);

    // Behaviors
    void AddShowroom(Showroom s);
    float GetAveragePrice();
    void ShowInventory();

};