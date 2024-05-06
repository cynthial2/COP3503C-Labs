// COP3503C: Lab 5 (requires: nothing... didnt use Ship.h/cpp)
// main.cpp
// Last Edited: 10/24/22

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*

int main() {

    cout << "Which file(s) to open?\n";
    cout << "1. friendlyships.shp" << endl;
    cout << "2. enemyships.shp" << endl;
    cout << "3. Both files" << endl;
    int option;
    cin >> option;


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

    if (option == 1 || option == 3) {
        // Open file
        ifstream friendly("friendlyships.shp", ios_base::binary);

        // Get ship data
        if (friendly.is_open()) {

            // Get ship count
            int count;
            friendly.read((char *) &count, 4);
            //cout << "count (int): " << count << endl;

            // Loop for each ship
            for (int i = 0; i < count; ++i) {

                // Get name length
                int name_length;
                friendly.read((char *) &name_length, 4);
                //cout << "name length: " << name_length << endl;
                name_length_vec.push_back(name_length);

                // Get name
                char *ship_name = new char[name_length];
                friendly.read(ship_name, name_length);
                //cout << "name: " << ship_name << endl;
                name_vec.push_back(ship_name);
                delete[] ship_name;

                // Get class length
                int class_length;
                friendly.read((char *) &class_length, 4);
                //cout << "class length: " << class_length << endl;
                class_length_vec.push_back(class_length);

                // Get class name
                char *class_name = new char[class_length];
                friendly.read(class_name, class_length);
                //cout << "name: " << class_name << endl;
                class_vec.push_back(class_name);
                delete[] class_name;

                // Get ship length
                short ship_length;
                friendly.read((char *) &ship_length, 2);
                //cout << "ship length: " << ship_length << endl;
                length_vec.push_back(ship_length);

                // Get ship shield
                int shield;
                friendly.read((char *) &shield, 4);
                //cout << "ship shield: " << shield << endl;
                shield_vec.push_back(shield);

                // Get ship speed
                float speed;
                friendly.read((char *) &speed, 4);
                //cout << "ship speed: " << speed << endl;
                speed_vec.push_back(speed);

                // Get weapon count
                int weapon_count;
                friendly.read((char *) &weapon_count, 4);
                //cout << "weapon count: " << weapon_count << endl;
                weapon_count_vec.push_back(weapon_count);
                //cout << " " << endl;

                for (int i = 0; i < weapon_count; ++i) {

                        // Get weapon name length
                        int weapon_name_length;
                        friendly.read((char *) &weapon_name_length, 4);
                        //cout << "weapon name length: " << weapon_name_length << endl;
                        weapon_name_length_vec.push_back(weapon_name_length);

                        // Get weapon name
                        char *weapon_name = new char[weapon_name_length];
                        friendly.read(weapon_name, weapon_name_length);
                        //cout << "weapon name: " << weapon_name << endl;
                        weapon_name_vec.push_back(weapon_name);
                        delete[] weapon_name;

                        // Get weapon power rating
                        int power;
                        friendly.read((char *) &power, 4);
                        //cout << "weapon power: " << power << endl;
                        weapon_power_vec.push_back(power);

                        // Get weapon consumption
                        float consumption;
                        friendly.read((char *) &consumption, 4);
                        //cout << "weapon consumption: " << consumption << endl;
                        weapon_consumption_vec.push_back(consumption);

                        //cout << " " << endl;
                    }
            }
        }
    }
    if (option == 2 || option == 3) {
        // Open file
        ifstream enemy("enemyships.shp", ios_base::binary);

        // Get ship data
        if (enemy.is_open()) {

            // Get ship count
            int count;
            enemy.read((char *) &count, 4);
            //cout << "count (int): " << count << endl;

            // Loop for each ship
            for (int i = 0; i < count; ++i) {

                // Get name length
                int name_length;
                enemy.read((char *) &name_length, 4);
                //cout << "name length: " << name_length << endl;
                name_length_vec.push_back(name_length);

                // Get name
                char *ship_name = new char[name_length];
                enemy.read(ship_name, name_length);
                //cout << "name: " << ship_name << endl;
                name_vec.push_back(ship_name);
                delete[] ship_name;

                // Get class length
                int class_length;
                enemy.read((char *) &class_length, 4);
                //cout << "class length: " << class_length << endl;
                class_length_vec.push_back(class_length);

                // Get class name
                char *class_name = new char[class_length];
                enemy.read(class_name, class_length);
                //cout << "name: " << class_name << endl;
                class_vec.push_back(class_name);
                delete[] class_name;

                // Get ship length
                short ship_length;
                enemy.read((char *) &ship_length, 2);
                //cout << "ship length: " << ship_length << endl;
                length_vec.push_back(ship_length);

                // Get ship shield
                int shield;
                enemy.read((char *) &shield, 4);
                //cout << "ship shield: " << shield << endl;
                shield_vec.push_back(shield);

                // Get ship speed
                float speed;
                enemy.read((char *) &speed, 4);
                //cout << "ship speed: " << speed << endl;
                speed_vec.push_back(speed);

                // Get weapon count
                int weapon_count;
                enemy.read((char *) &weapon_count, 4);
                //cout << "weapon count: " << weapon_count << endl;
                weapon_count_vec.push_back(weapon_count);
                //cout << "--------------------------" << endl;
                //cout << "--------------------------" << endl;

                for (int i = 0; i < weapon_count; ++i) {

                        // Get weapon name length
                        int weapon_name_length;
                        enemy.read((char *) &weapon_name_length, 4);
                        //cout << "weapon name length: " << weapon_name_length << endl;
                        weapon_name_length_vec.push_back(weapon_name_length);

                        // Get weapon name
                        char *weapon_name = new char[weapon_name_length];
                        enemy.read(weapon_name, weapon_name_length);
                        //cout << "weapon name: " << weapon_name << endl;
                        weapon_name_vec.push_back(weapon_name);
                        delete[] weapon_name;

                        // Get weapon power rating
                        int power;
                        enemy.read((char *) &power, 4);
                        //cout << "weapon power: " << power << endl;
                        weapon_power_vec.push_back(power);

                        // Get weapon consumption
                        float consumption;
                        enemy.read((char *) &consumption, 4);
                        //cout << "weapon consumption: " << consumption << endl;
                        weapon_consumption_vec.push_back(consumption);

                        //cout << " " << endl;
                    }
            }
        }
    }


    //cout << " " << endl;

    cout << "1. Print all ships" << endl;
    cout << "2. Starship with the strongest weapon" << endl;
    cout << "3. Strongest starship overall" << endl;
    cout << "4. Weakest ship (ignoring unarmed)" << endl;
    cout << "5. Unarmed ships" << endl;
    cin >> option;


    cout << name_vec.size() << endl;
    for (unsigned int i = 0; i < weapon_name_vec.size(); ++i) {
        cout << i << ": " << weapon_name_vec.at(i) << endl;
    }
    cout << " " << endl;


    // Options 1-4
    if (option != 5) {
        int total_weapons = 0;
        int max_weapon = 0;
        int max_power = 0;
        int min_power = 10000;
        int ship_idx = 0;
        for (unsigned int i = 0; i < name_vec.size(); ++i) {
            if (option == 1) {
                cout << "Name: " << name_vec.at(i) << endl;
                cout << "Class: " << class_vec.at(i) << endl;
                cout << "Length: " << length_vec.at(i) << endl;
                cout << "Shield capacity: " << shield_vec.at(i) << endl;
                cout << "Maximum Warp: " << speed_vec.at(i) << endl;
                cout << "Armaments:" << endl;
            }
            if (weapon_count_vec.at(i) > 0) {
                int total_power = 0;
                for (int j = 0; j < weapon_count_vec.at(i); ++j) {
                    int idx = j + total_weapons;
                    if (option == 1) {
                        cout << weapon_name_vec.at(idx) << ", " << weapon_power_vec.at(idx) << ", " << weapon_consumption_vec.at(idx) << endl;
                    }
                    if (option == 2 && weapon_power_vec.at(idx) > max_weapon) {
                        max_weapon = weapon_power_vec.at(idx);
                        ship_idx = i;
                    }
                    total_power += weapon_power_vec.at(idx);
                }
                if (option == 3 && total_power > max_power) {
                    max_power = total_power;
                    ship_idx = i;
                }
                else if (option == 4 && total_power < min_power) {
                    min_power = total_power;
                    ship_idx = i;
                }
                if (option == 1) {
                    cout << "Total firepower: " << total_power << endl;
                }
                total_weapons += weapon_count_vec.at(i);
            }
            else {
                if (option == 1) {
                    cout << "Unarmed" << endl;
                }
            }
            cout << " " << endl;
        }
        if (option == 2 || option == 3 || option == 4) {
            cout << "Name: " << name_vec.at(ship_idx) << endl;
            cout << "Class: " << class_vec.at(ship_idx) << endl;
            cout << "Length: " << length_vec.at(ship_idx) << endl;
            cout << "Shield capacity: " << shield_vec.at(ship_idx) << endl;
            cout << "Maximum Warp: " << speed_vec.at(ship_idx) << endl;
            cout << "Armaments: " << endl;
            int total_power = 0;
            for (int k = 0; k < weapon_count_vec.at(ship_idx); ++k) {
                int previous_weapons = 0;
                for (int m = 0; m < ship_idx; ++m) {
                    previous_weapons += weapon_count_vec.at(m);
                }
                int idx2 = k + previous_weapons;
                cout << weapon_name_vec.at(idx2) << ", " << weapon_power_vec.at(idx2) << ", " << weapon_consumption_vec.at(idx2) << endl;
                total_power += weapon_power_vec.at(idx2);
            }
            cout << "Total firepower: " << total_power << endl;
        }
    }

    // Option 5
    else {
        for (unsigned int i = 0; i < name_vec.size(); ++i) {
            if (weapon_count_vec.at(i) == 0) {
                cout << "Name: " << name_vec.at(i) << endl;
                cout << "Class: " << class_vec.at(i) << endl;
                cout << "Length: " << length_vec.at(i) << endl;
                cout << "Shield capacity: " << shield_vec.at(i) << endl;
                cout << "Maximum Warp: " << speed_vec.at(i) << endl;
                cout << "Armaments:" << endl;
                cout << "Unarmed" << endl;
                cout << " " << endl;
            }
        }
    }

    return 0;
}

*/

/*
// COP3503C: Lab 5 (submitted version - editted slightly better)
// main.cpp
// Last Edited: 10/24/22

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main() {

    cout << "Which file(s) to open?\n";
    cout << "1. friendlyships.shp" << endl;
    cout << "2. enemyships.shp" << endl;
    cout << "3. Both files" << endl;
    int option;
    cin >> option;

   // Initialize vectors
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

   // Get file data -> vectors
    if (option == 1 || option == 3) {
        // Open file
        ifstream friendly("friendlyships.shp", ios_base::binary);

        // Get ship data
        if (friendly.is_open()) {

            // Get ship count
            int count;
            friendly.read((char *) &count, 4);
            //cout << "count (int): " << count << endl;

            // Loop for each ship
            for (int i = 0; i < count; ++i) {

                // Get name length
                int name_length;
                friendly.read((char *) &name_length, 4);
                //cout << "name length: " << name_length << endl;
                name_length_vec.push_back(name_length);

                // Get name
                char *ship_name = new char[name_length];
                friendly.read(ship_name, name_length);
                //cout << "name: " << ship_name << endl;
                name_vec.push_back(ship_name);
                delete[] ship_name;

                // Get class length
                int class_length;
                friendly.read((char *) &class_length, 4);
                //cout << "class length: " << class_length << endl;
                class_length_vec.push_back(class_length);

                // Get class name
                char *class_name = new char[class_length];
                friendly.read(class_name, class_length);
                //cout << "name: " << class_name << endl;
                class_vec.push_back(class_name);
                delete[] class_name;

                // Get ship length
                short ship_length;
                friendly.read((char *) &ship_length, 2);
                //cout << "ship length: " << ship_length << endl;
                length_vec.push_back(ship_length);

                // Get ship shield
                int shield;
                friendly.read((char *) &shield, 4);
                //cout << "ship shield: " << shield << endl;
                shield_vec.push_back(shield);

                // Get ship speed
                float speed;
                friendly.read((char *) &speed, 4);
                //cout << "ship speed: " << speed << endl;
                speed_vec.push_back(speed);

                // Get weapon count
                int weapon_count;
                friendly.read((char *) &weapon_count, 4);
                //cout << "weapon count: " << weapon_count << endl;
                weapon_count_vec.push_back(weapon_count);
                //cout << " " << endl;

                for (int i = 0; i < weapon_count; ++i) {

                        // Get weapon name length
                        int weapon_name_length;
                        friendly.read((char *) &weapon_name_length, 4);
                        //cout << "weapon name length: " << weapon_name_length << endl;
                        weapon_name_length_vec.push_back(weapon_name_length);

                        // Get weapon name
                        char *weapon_name = new char[weapon_name_length];
                        friendly.read(weapon_name, weapon_name_length);
                        //cout << "weapon name: " << weapon_name << endl;
                        weapon_name_vec.push_back(weapon_name);
                        delete[] weapon_name;

                        // Get weapon power rating
                        int power;
                        friendly.read((char *) &power, 4);
                        //cout << "weapon power: " << power << endl;
                        weapon_power_vec.push_back(power);

                        // Get weapon consumption
                        float consumption;
                        friendly.read((char *) &consumption, 4);
                        //cout << "weapon consumption: " << consumption << endl;
                        weapon_consumption_vec.push_back(consumption);

                        //cout << " " << endl;
                    }
            }
        }
    }
    if (option == 2 || option == 3) {
        // Open file
        ifstream enemy("enemyships.shp", ios_base::binary);

        // Get ship data
        if (enemy.is_open()) {

            // Get ship count
            int count;
            enemy.read((char *) &count, 4);
            //cout << "count (int): " << count << endl;

            // Loop for each ship
            for (int i = 0; i < count; ++i) {

                // Get name length
                int name_length;
                enemy.read((char *) &name_length, 4);
                //cout << "name length: " << name_length << endl;
                name_length_vec.push_back(name_length);

                // Get name
                char *ship_name = new char[name_length];
                enemy.read(ship_name, name_length);
                //cout << "name: " << ship_name << endl;
                name_vec.push_back(ship_name);
                delete[] ship_name;

                // Get class length
                int class_length;
                enemy.read((char *) &class_length, 4);
                //cout << "class length: " << class_length << endl;
                class_length_vec.push_back(class_length);

                // Get class name
                char *class_name = new char[class_length];
                enemy.read(class_name, class_length);
                //cout << "name: " << class_name << endl;
                class_vec.push_back(class_name);
                delete[] class_name;

                // Get ship length
                short ship_length;
                enemy.read((char *) &ship_length, 2);
                //cout << "ship length: " << ship_length << endl;
                length_vec.push_back(ship_length);

                // Get ship shield
                int shield;
                enemy.read((char *) &shield, 4);
                //cout << "ship shield: " << shield << endl;
                shield_vec.push_back(shield);

                // Get ship speed
                float speed;
                enemy.read((char *) &speed, 4);
                //cout << "ship speed: " << speed << endl;
                speed_vec.push_back(speed);

                // Get weapon count
                int weapon_count;
                enemy.read((char *) &weapon_count, 4);
                //cout << "weapon count: " << weapon_count << endl;
                weapon_count_vec.push_back(weapon_count);
                //cout << "--------------------------" << endl;
                //cout << "--------------------------" << endl;

                for (int i = 0; i < weapon_count; ++i) {

                        // Get weapon name length
                        int weapon_name_length;
                        enemy.read((char *) &weapon_name_length, 4);
                        //cout << "weapon name length: " << weapon_name_length << endl;
                        weapon_name_length_vec.push_back(weapon_name_length);

                        // Get weapon name
                        char *weapon_name = new char[weapon_name_length];
                        enemy.read(weapon_name, weapon_name_length);
                        //cout << "weapon name: " << weapon_name << endl;
                        weapon_name_vec.push_back(weapon_name);
                        delete[] weapon_name;

                        // Get weapon power rating
                        int power;
                        enemy.read((char *) &power, 4);
                        //cout << "weapon power: " << power << endl;
                        weapon_power_vec.push_back(power);

                        // Get weapon consumption
                        float consumption;
                        enemy.read((char *) &consumption, 4);
                        //cout << "weapon consumption: " << consumption << endl;
                        weapon_consumption_vec.push_back(consumption);

                        //cout << " " << endl;
                    }
            }
        }
    }


    //cout << " " << endl;

    cout << "1. Print all ships" << endl;
    cout << "2. Starship with the strongest weapon" << endl;
    cout << "3. Strongest starship overall" << endl;
    cout << "4. Weakest ship (ignoring unarmed)" << endl;
    cout << "5. Unarmed ships" << endl;
    cin >> option;


    // Options 1-4
    if (option != 5) {
        int total_weapons = 0;
        int max_weapon = 0;
        int max_power = 0;
        int min_power = 10000;
        int ship_idx = 0;
        for (unsigned int i = 0; i < name_vec.size(); ++i) {
            if (option == 1) {
                cout << "Name: " << name_vec.at(i) << endl;
                cout << "Class: " << class_vec.at(i) << endl;
                cout << "Length: " << length_vec.at(i) << endl;
                cout << "Shield capacity: " << shield_vec.at(i) << endl;
                cout << "Maximum Warp: " << speed_vec.at(i) << endl;
                cout << "Armaments:" << endl;
            }
            // If armed ship...
            if (weapon_count_vec.at(i) > 0) {
                int total_power = 0;
                // Loop through each weapon ship(i) has
                for (int j = 0; j < weapon_count_vec.at(i); ++j) {
                   // Where to start in weapon vector
                    int idx = j + total_weapons;
                    if (option == 1) {
                        cout << weapon_name_vec.at(idx) << ", " << weapon_power_vec.at(idx) << ", " << weapon_consumption_vec.at(idx) << endl;
                    }
                    if (option == 2 && weapon_power_vec.at(idx) > max_weapon) {
                        max_weapon = weapon_power_vec.at(idx);
                        ship_idx = i;
                    }
                    total_power += weapon_power_vec.at(idx);
                }
                if (option == 1) {
                    cout << "Total firepower: " << total_power << endl;
                }
                else if (option == 3 && total_power > max_power) {
                    max_power = total_power;
                    ship_idx = i;
                }
                else if (option == 4 && total_power < min_power) {
                    min_power = total_power;
                    ship_idx = i;
                }
               // Keep track of where in weapon vector ship(i) ends
                total_weapons += weapon_count_vec.at(i);
            }
            // If unarmed ship...
            else {
                if (option == 1) {
                    cout << "Unarmed" << endl;
                }
            }
            cout << " " << endl;
        }
        // Use obtained ship idx to print out desired ship
        if (option == 2 || option == 3 || option == 4) {
            cout << "Name: " << name_vec.at(ship_idx) << endl;
            cout << "Class: " << class_vec.at(ship_idx) << endl;
            cout << "Length: " << length_vec.at(ship_idx) << endl;
            cout << "Shield capacity: " << shield_vec.at(ship_idx) << endl;
            cout << "Maximum Warp: " << speed_vec.at(ship_idx) << endl;
            cout << "Armaments: " << endl;
            int total_power = 0;
            for (int k = 0; k < weapon_count_vec.at(ship_idx); ++k) {
                int previous_weapons = 0;
                for (int m = 0; m < ship_idx; ++m) {
                    previous_weapons += weapon_count_vec.at(m);
                }
                int idx2 = k + previous_weapons;
                cout << weapon_name_vec.at(idx2) << ", " << weapon_power_vec.at(idx2) << ", " << weapon_consumption_vec.at(idx2) << endl;
                total_power += weapon_power_vec.at(idx2);
            }
            cout << "Total firepower: " << total_power << endl;
        }
    }

    // Option 5
    else {
        for (unsigned int i = 0; i < name_vec.size(); ++i) {
            if (weapon_count_vec.at(i) == 0) {
                cout << "Name: " << name_vec.at(i) << endl;
                cout << "Class: " << class_vec.at(i) << endl;
                cout << "Length: " << length_vec.at(i) << endl;
                cout << "Shield capacity: " << shield_vec.at(i) << endl;
                cout << "Maximum Warp: " << speed_vec.at(i) << endl;
                cout << "Armaments:" << endl;
                cout << "Unarmed" << endl;
                cout << " " << endl;
            }
        }
    }

    return 0;
}
 */

