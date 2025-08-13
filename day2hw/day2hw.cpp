// day2 hw is to make a calculator that can add, subtract, multiply, and divide two numbers
// add cpp boilerplate
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
    switch (operation) {
        case '+':
            cout << "Result: " << a + b << endl; // Addition
            break;
        case '-':
            cout << "Result: " << a - b << endl; // Subtraction
            break;
        case '*':
            cout << "Result: " << a * b << endl; // Multiplication
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << static_cast<double>(a) / b << endl; // Division with type casting for float result
            } else {
                cout << "Error: Division by zero is not allowed." << endl; // Error handling for division by zero
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl; // Error handling for invalid operation
    }

    return 0; // Indicate successful program termination
}