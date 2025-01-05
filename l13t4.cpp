#include <iostream>
using namespace std;
int main() {
    int x, range;
    // Taking the number and range as input from the user
    cout << "Enter the number to print its multiplication table: ";
    cin >> x;
    cout << "Enter the range up to which the table should be printed: ";
    cin >> range;
    // Print the multiplication table for the number x up to the specified range
    cout << "Multiplication table for " << x << " up to " << range << ":" << endl;
    // Loop to print the table
    for (int i = 1; i <= range; i++) {
        cout << x << " * " << i << " = " << x * i << endl;
    }
    return 0;
}
