// COP3503C: Lab 2 Pt 3 (Dealership.cpp)
// Last edited: 9/12/22

#include <iostream>
#include <vector>
#include "Dealership.h"

// Constructor
Dealership::Dealership(std::string _name, unsigned int _capacity) {
    name = _name;
    capacity = _capacity;
}

// Behaviors
void Dealership::AddShowroom(Showroom s) {
    if (showroom_list.size() == capacity) {
        std::cout << "Dealership is full, can't add another showroom!" << std::endl;
    }
    else {
        showroom_list.push_back(s);
    }
}

float Dealership::GetAveragePrice() {
    unsigned int i;
    unsigned int count = 0;
    float sum = 0;

    if (showroom_list.size() == 0) {
        std::cout << name << " is empty!" << std::endl;
        std::cout << "Average car price: $";
        return 0.00;
    }

    for (i = 0; i < showroom_list.size(); ++i) {
        sum += showroom_list.at(i).Showroom::GetInventoryValue();
        count += showroom_list.at(i).Showroom::GetVehicleList().size();
    }
    return sum/count;
}

void Dealership::ShowInventory() {
    unsigned int i;
    for (i = 0; i < showroom_list.size(); ++i) {
        showroom_list.at(i).Showroom::ShowInventory();
    }
    if (showroom_list.size() != 0) {
        std::cout << "Average car price: $";
    }
    std::cout << GetAveragePrice();
}