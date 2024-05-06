// Lab 7: Maps
// main.cpp
// requires: states.csv
// last edited: 11/13/22

#include <iostream>
#include <map>
#include <random>
#include <ctime>
#include <fstream>
using namespace std;

// Part 1
mt19937 random_mt;

int Random(int min, int max)
{
    uniform_int_distribution<int> dist(min, max);
    return dist(random_mt);
}
void RollDice(int numberOfRolls, int numberOfSides) {
    map<int, int> rollMap;
    // initialize all map values to 0
    for (int i = 1; i <= numberOfSides; ++i) {
        rollMap.emplace(i, 0);
    }
    // roll for map values
    for (int j = 0; j < numberOfRolls; ++j) {
        int roll = Random(1, numberOfSides);
        rollMap[roll] += 1;
    }
    // output values
    cout << endl;
    for (int k = 1; k <= numberOfSides; ++k) {
        cout << k << ": " << rollMap[k] << endl;
    }
}

// Part 2
class StateData {
public:
    string name;
    string capita_income;
    string population;
    string household_income;
    string households;

    void Display(map<string, StateData>::iterator iter) {
        cout << iter->first << endl;
        cout << "Population: " << iter->second.population << endl;
        cout << "Per Capita Income: " << iter->second.capita_income << endl;
        cout << "Median Household Income: " << iter->second.household_income << endl;
        cout << "Number of Households: " << iter->second.households << endl;
    }
};

int main()
{
    cout << "1. Random Numbers\n";
    cout << "2. State Info\n";

    int option;
    cin >> option;

    if (option == 1)
    {
        int randomSeed;
        cout << "Random seed value: ";
        cin >> randomSeed;
        random_mt.seed(randomSeed);

        // User Input
        cout << "Number of times to roll the die: ";
        int roll;
        cin >> roll;

        cout << "Number of sides on this die: ";
        int sides;
        cin >> sides;

        // Roll Dice
        RollDice(roll, sides);
    }
    else if (option == 2)
    {
        map<string, StateData> statesMap;
        // Load the states
        ifstream file("states.csv");
        if (file.is_open()) {
            string value;
            // skip past 5 titles
            getline(file, value, '\n');
            // load rest of data (one line at a time)
            while (getline(file, value, ',')) {
                StateData state;
                state.name = value;
                getline(file, state.capita_income, ',');
                getline(file, state.population, ',');
                getline(file, state.household_income, ',');
                getline(file, state.households, '\n');
                statesMap.emplace(state.name, state);
            }
        }
        else {
            cout << "file not open" << endl;
        }

        // Get input for option 2
        cout << "1. Print all states" << endl;
        cout << "2. Search for a state" << endl;

        int option2;
        cin >> option2;

        // show all states
        if (option2 == 1) {
            auto iter = statesMap.begin();
            for (; iter != statesMap.end(); ++iter) {
                iter->second.Display(iter);
            }

        }
            // search for specific state
        else if (option2 == 2) {

            string search;
            cin >> search;

            auto iter = statesMap.find(search);
            if (iter == statesMap.end()) {
                cout << "No match found for " << search << endl;
            }
            else {
                iter->second.Display(iter);
            }
        }
    }
    return 0;
}