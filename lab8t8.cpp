#include <iostream>
using namespace std;
int main() {
    // Declare the variables for the 15 numbers
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int num11, num12, num13, num14, num15;
    // Input 15 numbers from the user
    cout << "Enter 15 numbers:" << endl;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "Enter number 4: ";
    cin >> num4;
    cout << "Enter number 5: ";
    cin >> num5;
    cout << "Enter number 6: ";
    cin >> num6;
    cout << "Enter number 7: ";
    cin >> num7;
    cout << "Enter number 8: ";
    cin >> num8;
    cout << "Enter number 9: ";
    cin >> num9;
    cout << "Enter number 10: ";
    cin >> num10;
    cout << "Enter number 11: ";
    cin >> num11;
    cout << "Enter number 12: ";
    cin >> num12;
    cout << "Enter number 13: ";
    cin >> num13;
    cout << "Enter number 14: ";
    cin >> num14;
    cout << "Enter number 15: ";
    cin >> num15;
    // Add the first 5 numbers
    int sumFirstFive = num1 + num2 + num3 + num4 + num5;
    // Multiply the next 5 numbers
    int productNextFive = num6 * num7 * num8 * num9 * num10;
    // Subtract the last 5 numbers
    int subtractLastFive = num11 - num12 - num13 - num14 - num15;
    // Add the first two results and subtract the third result
    int finalResult = sumFirstFive + productNextFive - subtractLastFive;
    // Output the final result
    cout << "The final result is: " << finalResult << endl;
    return 0;
}
