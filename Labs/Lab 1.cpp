// COP3503C: Lab 1
// Last edited: 9/7/22


/*
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

    // Get some input for the title
    string title;
    cout << "Enter a title for the data:" << endl;
    getline(cin, title);
    cout << "You entered: " << title << endl;

    // Get some input for column header #1
    string header1;
    cout << "Enter the column 1 header:" << endl;
    getline(cin, header1);
    cout << "You entered: " << header1 << endl;

    // Get some input for column header #2
    string header2;
    cout << "Enter the column 2 header:" << endl;
    getline(cin, header2);
    cout << "You entered: " << header2 << endl;

    // Enter data until the user types '-1'
    string data;
    vector<string> author_names;
    vector<int> num_novels;

    while (true) {
        cout << "Enter a data point (-1 to stop input):" << endl;
        getline(cin, data);

        // Check for exit
        if (data == "-1") {
            break;
        }

        // Check for one comma
        int idx1 = data.find(',');
        if (idx1 == string::npos) {
            cout << "Error: No comma in string." << endl;
            continue;
        }

        // Check for more than one comma
        int idx2 = data.find(',',idx1 + 1);
        if (idx2 != string::npos) {
            cout << "Error: Too many commas in input." << endl;
            continue;
        }

        // Check for integer following comma
        try {
            string books = data.substr(idx1 + 2, data.size());

            int a;
            for (a = 0; a < books.size(); ++a) {
                if (isdigit(books.at(a)) != true) {
                    throw invalid_argument("Error: Comma not followed by an integer.");
                }
            }
        }
        catch (invalid_argument excpt){
            cout << excpt.what() << endl;
            continue;
        }

        // If all tests passed...
        int novels = stoi(data.substr(idx1 + 2, data.size()));

        // Store author names and number of novels separately
        author_names.push_back(data.substr(0, idx1));
        num_novels.push_back(novels);

        cout << "Data string: " << author_names.back() << endl;
        cout << "Data integer: " << num_novels.back() << endl;
    }

    // Output Table
    cout << endl;
    cout << right << setw(33) << title << endl;
    cout << left << setw(20) << header1 << "|" << right << setw(23) << header2 << endl;
    cout << "--------------------------------------------" << endl;
    unsigned int i;
    for (i = 0; i < author_names.size(); ++i) {
        cout << left << setw(20) << author_names.at(i) << "|" << right << setw(23) << num_novels.at(i) << endl;
    }


    // Output Chart
    unsigned int j;
    unsigned int k;
    cout << endl;
    for (j = 0; j < author_names.size(); ++j) {
        cout << right << setw(20) << author_names.at(j) << " ";
        for (k = 0; k < num_novels.at(j); ++k)
            cout << "*";
        cout << endl;
    }

    return 0;}

    */
