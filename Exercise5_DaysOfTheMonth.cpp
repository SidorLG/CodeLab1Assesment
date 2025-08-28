#include <iostream>  // Includes the input-output stream library
using namespace std;

int main() {
    int monthNumber;  // Variable to store the month as a number (1–12)

    // Prompt the user to enter a number representing a month
    cout << "Enter a month number (1 to 12): ";
    cin >> monthNumber;

    // Use a switch statement to determine how many days are in the selected month
    switch (monthNumber) {
        // Months with 31 days
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "This month has 31 days." << endl;
            break;

        // Months with 30 days
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "This month has 30 days." << endl;
            break;

        // February (special case)
        case 2:
            cout << "February has 28 or 29 days (depending on leap year)." << endl;
            break;

        // If the user enters an invalid month number
        default:
            cout << "Invalid input. Please enter a number between 1 and 12." << endl;
            break;
    }

    return 0; // End the program
}
