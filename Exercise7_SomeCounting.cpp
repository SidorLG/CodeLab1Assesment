#include <iostream>  // Include input-output stream library
using namespace std;

int main() {
    // 1. Count up from 0 to 50 in increments of 1
    cout << "Counting up from 0 to 50:" << endl;
    for (int i = 0; i <= 50; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 2. Count down from 50 to 0 in decrements of 1
    cout << "Counting down from 50 to 0:" << endl;
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 3. Count up from 30 to 50 in increments of 1
    cout << "Counting up from 30 to 50:" << endl;
    for (int i = 30; i <= 50; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 4. Count down from 50 to 10 in decrements of 2
    cout << "Counting down from 50 to 10 in steps of 2:" << endl;
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 5. Count up from 100 to 200 in increments of 5
    cout << "Counting up from 100 to 200 in steps of 5:" << endl;
    for (int i = 100; i <= 200; i += 5) {
        cout << i << " ";
    }
    cout << endl;

    return 0;  // End the program successfully 
}

