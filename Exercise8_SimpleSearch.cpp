#include <iostream>  // For input/output
#include <string>    // For string handling
using namespace std;

int main() {
    // Initialize the array with names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    int arraySize = sizeof(names) / sizeof(names[0]); // Calculate the number of elements in the array

    string searchTerm = "Sam"; // Default search term

    // OPTIONAL: Ask the user to input the name to search
    cout << "Enter the name to search (or press Enter to search for 'Sam'): ";
    getline(cin, searchTerm);

    // If user enters nothing, keep "Sam" as search term
    if (searchTerm.empty()) {
        searchTerm = "Sam";
    }

    bool found = false; // Flag to indicate if the name was found

    // Loop through the array to search for the term
    for (int i = 0; i < arraySize; i++) {
        if (names[i] == searchTerm) {  // Check if current element matches the search term
            found = true;               // Set flag to true if found
            break;                     // Exit loop early since we found the name
        }
    }

    // Output the result based on whether the name was found
    if (found) {
        cout << "The name '" << searchTerm << "' was found in the list." << endl;
    } else {
        cout << "The name '" << searchTerm << "' was NOT found in the list." << endl;
    }

    return 0; // End program
}

