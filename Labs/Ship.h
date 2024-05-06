// COP3503C: Lab 5 (ship.h)
// Last Edited: 10/23/22

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#pragma once


class Ship {

    string filename = "none";

    vector<int> name_length_vec;
    vector<string> name_vec;
    vector<int> class_length_vec;
    vector<string> class_vec;
    vector<short> length_vec;
    vector<int> shield_vec;
    vector<float> speed_vec;
    vector<int> weapon_count_vec;

    vector<int> weapon_name_length_vec;
    vector<string> weapon_name_vec;
    vector<int> weapon_power_vec;
    vector<float> weapon_consumption_vec;

public:

    Ship(int option = 0);
    void InitializeShipData();

};

