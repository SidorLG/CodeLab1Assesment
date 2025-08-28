#include <iostream>   // Includes input-output stream library
#include <string>     // Includes string handling
#include <algorithm>  // Includes transform function for case-insensitive comparison

using namespace std;

// Function to convert a string to lowercase for case-insensitive comparison
string toLower(string input) {
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}

int main() {
    string userAnswer;

    // Ask the question
    cout << "Question: What is the capital of France? ";
    getline(cin, userAnswer); // Use getline to handle full string inputs with spaces

    // Check answer with case-insensitive comparison
    if (toLower(userAnswer) == "paris") {
        cout << "Correct! Paris is the capital of France." << endl;
    } else {
        cout << "Incorrect. The correct answer is Paris." << endl;
    }

    // --- ADVANCED REQUIREMENTS ---

    // Optional: Add more questions
    string questions[3] = {
        "What is the capital of Germany?",
        "What is the capital of Italy?",
        "What is the capital of Spain?"
    };

    string answers[3] = {
        "berlin", // lowercase for easy comparison
        "rome",
        "madrid"
    };

    // Loop through the additional questions
    for (int i = 0; i < 3; i++) {
        cout << "\n" << questions[i] << " ";
        getline(cin, userAnswer);

        // Check answer (case-insensitive)
        if (toLower(userAnswer) == answers[i]) {
            cout << "Correct!" << endl;
        } else {
            cout << "Incorrect. The correct answer is " << answers[i][0] << answers[i].substr(1) << "." << endl;
        }
    }

    return 0; // Program executed successfully
}
