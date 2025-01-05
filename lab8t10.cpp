#include <iostream>
using namespace std;
int main() {
    int number, reversed = 0;
    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;
    // Extract digits and reverse the number step by step
    // Reverse by manually handling each digit
    int digit1 = number % 10;  // Last digit
    reversed = reversed * 10 + digit1;
    number = number / 10;
    int digit2 = number % 10;  // Second last digit
    reversed = reversed * 10 + digit2;
    number = number / 10;
    int digit3 = number % 10;  // Third last digit
    reversed = reversed * 10 + digit3;
    number = number / 10;
    int digit4 = number % 10;  // Fourth last digit
    reversed = reversed * 10 + digit4;
    // Output the reversed number
    cout << "Reversed number is: " << reversed << endl;
    return 0;
}
