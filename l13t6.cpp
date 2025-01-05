#include <iostream>
using namespace std;
int main() {
    int a, b;
    // Prompt the user to input two numbers, a and b
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;
    // Calculate the midpoint of the range
    int midpoint = (a + b) / 2;
    // Display the midpoint
    cout << "The midpoint of the range between " << a << " and " << b << " is " << midpoint << "." << endl;
    // Compare all numbers in the range [a, b] to the midpoint
    for (int i = a; i <= b; i++) {
        if (i < midpoint) {
            cout << i << " is less than the midpoint." << endl;
        } else if (i > midpoint) {
            cout << i << " is greater than the midpoint." << endl;
        } else {
            cout << i << " is equal to the midpoint." << endl;
        }
    }
    return 0;
}
