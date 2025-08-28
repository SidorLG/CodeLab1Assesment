#include <iostream>  // For input and output
using namespace std;

int main() {
    const int correctPassword = 12345;  // The correct password to unlock the safe
    int userInput;                      // Variable to store the user's guess
    int attempts = 0;                   // Counter for the number of attempts
    const int maxAttempts = 5;          // Maximum number of allowed attempts

    // While loop allows up to 5 attempts
    while (attempts < maxAttempts) {
        cout << "Enter the password: ";
        cin >> userInput;  // Read user input

        // Check if the password is correct
        if (userInput == correctPassword) {
            cout << "Access granted. Welcome to the Secure Area!" << endl;
            break;  // Exit loop when password is correct
        } else {
            attempts++;  // Increment the attempt counter
            int attemptsLeft = maxAttempts - attempts;

            // If attempts remain, inform the user
            if (attemptsLeft > 0) {
                cout << "Incorrect password. You have " << attemptsLeft << " attempt(s) remaining." << endl;
            } else {
                // If all attempts are used, alert the user
                cout << "Too many failed attempts. The authorities have been alerted!" << endl;
            }
        }
    }

    return 0; // End of program
}
