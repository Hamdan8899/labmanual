// Version 2: Using Ternary Operator
#include <iostream>
using namespace std;

int main() {
    // Declare three numbers
    int num1, num2, num3;
    // Input the numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    // Find the largest using the ternary operator
    int largest = (num1 > num2) 
                    ? ((num1 > num3) ? num1 : num3) 
                    : ((num2 > num3) ? num2 : num3);

    // Output the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}