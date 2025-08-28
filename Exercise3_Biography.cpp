#include <iostream>   // Includes the input-output stream library
#include <string>     // Includes support for the string data type
#include <limits>    // For std::numeric_limits

using namespace std;

int main() {
    // Declare variables for name, hometown, and age
    string name;
    string hometown;
    int age;

    // Prompt the user to input their name (can include spaces)
    cout << "Enter your full name: ";
    getline(cin, name); // getline allows full names with spaces

    // Prompt the user to input their hometown (can include spaces)
    cout << "Enter your hometown: ";
    getline(cin, hometown); // getline allows towns with spaces

    // Prompt the user to input their age
    cout << "Enter your age: ";
    cin >> age;

    // Input validation: check if age is a valid integer
    if (cin.fail()) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "\nInvalid age input. Please enter a numeric value next time.\n";
    } else {
        // Output all the information in one cout statement, each item on a new line
        cout << "\nBiography:\n"
             << "Name: " << name << "\n"
             << "Hometown: " << hometown << "\n"
             << "Age: " << age << endl;
    }
    return 0; // End the program successfully 
}

