#include <iostream>
using namespace std;
int main() {
    float num1, num2, result;
    char operation;
    // Input: num1, operation, and num2
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator (+, -, *, /, %): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;
    // Perform the operation using if-else
    if (operation == '+') {
        result = num1 + num2;
        cout << "num1: " << num1 << endl;
        cout << "operation: " << operation << endl;
        cout << "num2: " << num2 << endl;
        cout << "The result is " << result << "." << endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << "num1: " << num1 << endl;
        cout << "operation: " << operation << endl;
        cout << "num2: " << num2 << endl;
        cout << "The result is " << result << "." << endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << "num1: " << num1 << endl;
        cout << "operation: " << operation << endl;
        cout << "num2: " << num2 << endl;
        cout << "The result is " << result << "." << endl;
    }
    else if (operation == '/') {
        if (num2 == 0) {
            cout << "num1: " << num1 << endl;
            cout << "operation: " << operation << endl;
            cout << "num2: " << num2 << endl;
            cout << "Division by zero is not allowed." << endl;
        } else {
            result = num1 / num2;
            cout << "num1: " << num1 << endl;
            cout << "operation: " << operation << endl;
            cout << "num2: " << num2 << endl;
            cout << "The result is " << result << "." << endl;
        }
    }
    else if (operation == '%') {
        if (num2 == 0) {
            cout << "num1: " << num1 << endl;
            cout << "operation: " << operation << endl;
            cout << "num2: " << num2 << endl;
            cout << "Division by zero is not allowed for modulus operation." << endl;
        } else {
            result = (int)num1 % (int)num2;
            cout << "num1: " << num1 << endl;
            cout << "operation: " << operation << endl;
            cout << "num2: " << num2 << endl;
            cout << "The result is " << result << "." << endl;
        }
    }
    else {
        cout << "Invalid operator." << endl;
    }
    return 0;
}
