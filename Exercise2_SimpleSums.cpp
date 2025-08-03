#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    int sumResult;
    
    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;
    
    sumResult = firstNumber + secondNumber;
    cout << "Sum is: " << sumResult << endl;
    return 0;
}