#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    // Input two integers from the user
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    // Compare the two numbers to find the larger one
    if (num1 > num2) {
        cout << "The larger number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The larger number is: " << num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}
