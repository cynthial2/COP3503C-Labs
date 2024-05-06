// COP3503C: Lab 2 Pt 2 (Showroom.h)
// Last edited: 9/12/22

#include <iostream>
#include <vector>
#include <string>
#include "Vehicle.h"
#pragma once

class Showroom {

    std::string name;
    int capacity;
    std::vector<Vehicle> vehicle_list;

public:
    // Default constructor (all parameters have default values)
    Showroom(std::string _name = "Unnamed Showroom", unsigned int _capacity = 0);

    // Accessor
    std::vector<Vehicle> GetVehicleList();

    // Behaviors
    void AddVehicle(Vehicle v);
    void ShowInventory();
    float GetInventoryValue();

};