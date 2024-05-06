// Lab 8: Number Conversion
// main.cpp
// requires: colors1.txt, colors2.txt, Color.h, Color.cpp
// last edited: 11/28/22

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <map>
#include "Color.h"
using namespace std;

int main () {
    int a = 5;
    int b = 4;
    if ([](int a, int b){return (a+b)/2 == 3.5;}) {
        cout << (a+b)/2 << endl;
        cout << "Yeah!" << endl;
    }
    else {
        cout << "Nah!" << endl;
    }
}

//void ReadFile(const char* filename,  map<string, Color>& colors);
//
//void PrintColors(const map<string, Color>& colors);
//void PrintColor(const Color& color);
//void SearchForColor(map<string, Color>& colors);
//
//int main()
//{
//    cout << "1-6: Load colors1/2/3/4/5/6.txt" << endl;
//    cout << "7. Load all 6 files" << endl;
//    int choice;
//    cin >> choice;
//
//    map<string, Color> colors;
//    if (choice >= 1 && choice <= 6)
//    {
//        string file = "colors" + to_string(choice) + ".txt";
//        ReadFile(file.c_str(), colors);
//    }
//    else if (choice == 7)
//    {
//        for (int i = 1; i <= 6; i++)
//        {
//            string file = "colors" + to_string(i) + ".txt";
//            ReadFile(file.c_str(), colors);
//        }
//
//    }
//
//    // Secondary menu
//    cout << "1. Show all colors" << endl;
//    cout << "2. Search for a color" << endl;
//    cin >> choice;
//
//    if (choice == 1)
//        PrintColors(colors);
//    else if (choice == 2)
//        SearchForColor(colors);
//    return 0;
//
//}
//
//void ReadFile(const char* filename, map<string, Color>& colors)
//{
//    // Read the file, create and store some Color objects
//    ifstream file(filename);
//    string name;
//    string value;
//    while (getline(file, name, ' ')) {
//        Color color;
//        color.SetName(name.c_str());
//        //cout << color.GetName() << endl;
//        getline(file, value, '\n');
//        color.SetValue(std::stoi(value));
//        //colors[color.GetName()] = color; //same as line 83
//        colors.emplace(name, color);
//    }
//}
//void PrintColors(const map<string, Color>& colors)
//{
//    // iterate through all entries in the map and print each color, one at a time
//    auto iter = colors.begin();
//    int count = 0;
//    for (; iter!= colors.end(); ++iter) {
//        PrintColor(iter->second);
//        count += 1;
//    }
//    // Print out the color count afterward
//    cout << "Number of colors: " << count << endl;
//}
//void PrintColor(const Color& color)
//{
//    cout << left << setw(20) << color.GetName();
//    cout << right << setw(10) << color.GetHexValue();
//    cout << "\t\t" << (int)color.GetR() << "," << (int)color.GetG() << "," << (int)color.GetB() << endl;
//}
//void SearchForColor(map<string, Color>& colors)
//{
//    // Get some input, check if that key exists, then print out the color (or an error message)
//    string search;
//    cin >> search;
//
//    auto iter = colors.find(search);
//
//    if (iter != colors.end()) {
//        PrintColor(iter->second);
//    }
//    else {
//        cout << search << " not found!" << endl;
//    }
//
//}

