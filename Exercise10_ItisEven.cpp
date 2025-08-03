#include <iostream> // Includes the input/output stream library for using cin and cout
using namespace std; // Allows use of standard names like cout and cin without 'std::'

// Main function - the entry point of the program
int main() {
    int userNumber; // Declares an integer variable to store the user's input number

    cout << "Enter a number: "; // Prompts the user to enter a number
    cin >> userNumber; // Reads the number entered by the user and stores it in userNumber

    // Checks if the number is divisible by 2 (i.e., even)
    if (userNumber % 2 == 0)
        cout << userNumber << " is even."; // If divisible by 2, it's even
    else
        cout << userNumber << " is odd."; // Otherwise, it's odd

    return 0; // Return 0 to indicate that the program executed successfully
}