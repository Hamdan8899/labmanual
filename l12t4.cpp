#include <iostream>
using namespace std;
int main() {
    //declare 3 numbers
    int a, b, c;
    //input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    //find the largest using if nested
    if (a >= b && a >= c) {
        if (b == c) {
            cout << "All numbers are equal." << endl;
        } else {
            cout << "The largest number is " << a << "." << endl;
        }
    } else if (b >= a && b >= c) {
        cout << "The largest number is " << b << endl;
    } else {
        cout << "The largest number is " << c << endl;
    }
    return 0;
}
