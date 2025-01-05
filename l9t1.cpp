#include <iostream>
using namespace std;
int main() {
    int num;
    // Step 1: Input an integer from the user
    cout << "Enter an integer: ";
    cin >> num;
    // Step 2: Check whether the number is even or odd using modulus operator
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    return 0;
}
