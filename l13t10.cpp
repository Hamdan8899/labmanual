#include <iostream>
using namespace std;
int main() {
    int number;  // Use int for the number variable
    int totalDigits = 0, evenDigits = 0, oddDigits = 0;
    // Prompt the user to input a number
    cout << "Enter a number: ";
    cin >> number;
    // Handle the case where the number is 0 (special case since we can't divide 0)
    if (number == 0) {
        totalDigits = 1;
        evenDigits = 1;  // 0 is considered an even number
        oddDigits = 0;
    } else {
        // Count the total number of digits, even digits, and odd digits
        // Using do-while so it processes at least one time
        do {
            int digit = number % 10;  // Extract the last digit

            if (digit < 0) {
                digit = -digit;  // If digit is negative, convert it to positive
            }

            if (digit % 2 == 0) {
                evenDigits++;  // Increment even digit counter
            } else {
                oddDigits++;  // Increment odd digit counter
            }

            totalDigits++;  // Increment total digit counter
            number /= 10;  // Remove the last digit
        } while (number > 0);  // Continue while number is greater than 0
    }
    // Display the results
    cout << "Total digits: " << totalDigits << endl;
    cout << "Even digits: " << evenDigits << endl;
    cout << "Odd digits: " << oddDigits << endl;

    return 0;
}



