// COP3503C: Lab 5 (ship.cpp)
// Last Edited: 10/23/22

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Ship.h"
using namespace std;


Ship::Ship(int option) {
    if (option == 1) {
        filename = "friendlyships.shp";
    }
    else {
        filename = "enemyships.shp";
    }
}

void Ship::InitializeShipData() {

    // Open file
    ifstream ship(filename, ios_base::binary);

    // Get ship data
    if (ship.is_open()) {

        // Get ship count
        int count;
        ship.read((char *) &count, 4);
        cout << "count (int): " << count << endl;

        // Loop for each ship
        for (int i = 0; i < count; ++i) {

            // Get name length
            int name_length;
            ship.read((char *) &name_length, 4);
            cout << "name length: " << name_length << endl;
            name_length_vec.push_back(name_length);

            // Get name
            char *ship_name = new char[name_length];
            ship.read(ship_name, name_length);
            cout << "name: " << ship_name << endl;
            name_vec.push_back(ship_name);
            delete[] ship_name;

            // Get class length
            int class_length;
            ship.read((char *) &class_length, 4);
            cout << "class length: " << class_length << endl;
            class_length_vec.push_back(class_length);

            // Get class name
            char *class_name = new char[class_length];
            ship.read(class_name, class_length);
            cout << "name: " << class_name << endl;
            class_vec.push_back(class_name);
            delete[] class_name;

            // Get ship length
            short ship_length;
            ship.read((char *) &ship_length, 2);
            cout << "ship length: " << ship_length << endl;
            length_vec.push_back(ship_length);

            // Get ship shield
            int shield;
            ship.read((char *) &shield, 4);
            cout << "ship shield: " << shield << endl;
            shield_vec.push_back(shield);

            // Get ship speed
            float speed;
            ship.read((char *) &speed, 4);
            cout << "ship speed: " << speed << endl;
            speed_vec.push_back(speed);

            // Get weapon count
            int weapon_count;
            ship.read((char *) &weapon_count, 4);
            cout << "weapon count: " << weapon_count << endl;
            weapon_count_vec.push_back(weapon_count);
            cout << "--------------------------" << endl;
            cout << "--------------------------" << endl;

            for (int i = 0; i < weapon_count; ++i) {

                // Get weapon name length
                int weapon_name_length;
                ship.read((char *) &weapon_name_length, 4);
                cout << "weapon name length: " << weapon_name_length << endl;
                weapon_name_length_vec.push_back(weapon_name_length);

                // Get weapon name
                char *weapon_name = new char[weapon_name_length];
                ship.read(weapon_name, weapon_name_length);
                cout << "weapon name: " << weapon_name << endl;
                weapon_name_vec.push_back(weapon_name);
                delete[] weapon_name;

                // Get weapon power rating
                int power;
                ship.read((char *) &power, 4);
                cout << "weapon power: " << power << endl;
                weapon_power_vec.push_back(power);

                // Get weapon consumption
                float consumption;
                ship.read((char *) &consumption, 4);
                cout << "weapon consumption: " << consumption << endl;
                weapon_consumption_vec.push_back(consumption);

                cout << "--------------------" << endl;
            }
        }
    }
}


