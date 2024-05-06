// COP3503C: Lab 2 Pt 2 (Showroom.cpp)
// Last edited: 9/13/22

#include <iostream>
#include <vector>
#include "Showroom.h"

// Default constructor (all parameters have default values)
Showroom::Showroom(std::string _name, unsigned int _capacity) {
    name = _name;
    capacity = _capacity;
}

// Accessor
std::vector<Vehicle> Showroom::GetVehicleList() {
    return vehicle_list;
}

// Behaviors
void Showroom::AddVehicle(Vehicle v) {
    if (vehicle_list.size() == capacity) {
        std::cout << "Showroom is full! Cannot add " << v.Vehicle::GetYearMakeModel() << std::endl;
    }
    else {
        vehicle_list.push_back(v);
    }
}

void Showroom::ShowInventory() {
    if (vehicle_list.size() == 0) {
        std::cout << name << " is empty!" << std::endl;
    }
    else {
        std::cout << "Vehicles in " << name << std::endl;
    }

    unsigned int i;
    for (i = 0; i < vehicle_list.size(); ++i) {
        vehicle_list.at(i).Vehicle::Display();
    }
    std::cout << std::endl;
}

float Showroom::GetInventoryValue() {
    unsigned i;
    float sum = 0;
    for (i = 0; i < vehicle_list.size(); ++i) {
        sum += vehicle_list.at(i).Vehicle::GetPrice();
    }
    return sum;
}
