// add bolierplate code for c++ program
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char operation;
    cout << "Welcome to the Calculator Program!\n";
    cout << "Enter value for a: ";
    cin >> a; // Input first number
    cout << "Enter value for b: ";
    cin >> b; // Input second number
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation; // Input operation

    if (operation == '+') {
        cout << "Result: " << a + b << endl; // Addition
    } else if (operation == '-') {
        cout << "Result: " << a - b << endl; // Subtraction
    } else if (operation == '*') {
        cout << "Result: " << a * b << endl; // Multiplication
    } else if (operation == '/') {
        if (b != 0) {
            cout << "Result: " << static_cast<double>(a) / b << endl; // Division with type casting for float result
        } else {
            cout << "Error: Division by zero is not allowed." << endl; // Error handling for division by zero
        }
    } else {
        cout << "Error: Invalid operation." << endl; // Error handling for invalid operation
    }

    return 0;
}