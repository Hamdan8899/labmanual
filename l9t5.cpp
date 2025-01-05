#include <iostream>
using namespace std;
int main() {
    // Declare variables
    double num1, num2;
    char operation;
    // Take the first number as input
    cout << "Enter the first number: ";
    cin >> num1;
    // Take the operator as input
    cout << "Enter the operator (+, -, *, /, %): ";
    cin >> operation;
    // Take the second number as input
    cout << "Enter the second number: ";
    cin >> num2;
    // Perform the corresponding operation based on the operator
    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } 
    else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } 
    else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } 
    else if (operation == '/') {
        // Handle division by zero
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        } else {
            cout << "Result: " << num1 / num2 << endl;
        }
    } 
    else if (operation == '%') {
        // Check if both numbers are integers for modulus operation
        if (num1 == int(num1) && num2 == int(num2)) {
            int intNum1 = num1;
            int intNum2 = num2;
            if (intNum2 == 0) {
                cout << "Error: Division by zero in modulus operation" << endl;
            } else {
                cout << "Result: " << intNum1 % intNum2 << endl;
            }
        } else {
            cout << "Error: Modulus operation is only valid for integers." << endl;
        }
    } 
    else {
        // Invalid operator handling
        cout << "Error: Invalid operator!" << endl;
    }
    return 0;
}
