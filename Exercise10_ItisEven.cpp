#include <iostream>  // Include input-output stream library
#include <string>    // Include string library for returning messages
using namespace std;

// Function to check if a number is even or odd
// Takes an integer parameter and returns a string message
string checkEvenOdd(int number) {
    if (number % 2 == 0) {
        // If remainder is 0 when divided by 2, number is even
        return "The provided number is even";
    } else {
        // Otherwise, number is odd
        return "The provided number is odd";
    }
}

int main() {
    int userNumber;  // Variable to store the user's input number

    // Ask the user to enter a number
    cout << "Please enter a number: ";
    cin >> userNumber;

    // Call the checkEvenOdd function and store the returned message
    string resultMessage = checkEvenOdd(userNumber);

    // Output the returned message from the function
    cout << resultMessage << endl;

    return 0;  // End of program
}
