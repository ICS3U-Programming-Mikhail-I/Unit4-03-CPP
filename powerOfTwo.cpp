// Copyright 2025 Mikhail Ibrahim
// Date: Apr 21, 2025
// Description: A C++ program that calculates and displays the square
// (power of 2) of all numbers from 0 up to a user-entered whole number,
// using a for loop and includes input error handling.

#include <iostream>
#include <limits>  // To handle input errors

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number;

    // Ask the user to input a number
    cout << "Welcome! This program prints the squares of numbers from 0"
         << endl;
    cout << "up to the number you enter." << endl;
    cout << "Enter a non-negative whole number: ";
    cin >> number;

    // Input validation
    if (cin.fail()) {
        cin.clear();  // Clear input stream error flags
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Error: Please enter digits only (no letters, symbols, or decimals" << endl;
        return 1;  // Exit program with error code
    }

    if (number < 0) {
        cout << "Error: Please enter a non-negative number." << endl;
        return 1;
    }

    // Valid input - proceed to calculate and display the squares
    for (int i = 0; i <= number; ++i) {
        cout << i << "^2 = " << i * i << endl;
    }

    return 0;
}
