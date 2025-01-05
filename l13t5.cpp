#include <iostream>
using namespace std;
int main() {
    string batchNumber;
    int sumOfDigits = 0;
    // Prompt the user to input the batch number
    cout << "Enter the batch number: ";
    cin >> batchNumber;
    // Calculate the sum of digits
    for (char digit : batchNumber) {
        // Ensure the character is a digit
        if (isdigit(digit)) {
            sumOfDigits += digit - '0';  // Convert char to int and add to sum
        } else {
            cout << "Invalid input: Batch number must contain only digits." << endl;
            return 1; // Exit if input is invalid
        }
    }
    // Check if the sum of digits is divisible by 3
    if (sumOfDigits % 3 == 0) {
        cout << "The batch is valid. Sum of digits (" << sumOfDigits << ") is divisible by 3." << endl;
    } else {
        cout << "The batch is invalid. Sum of digits (" << sumOfDigits << ") is not divisible by 3." << endl;
    }
    return 0;
}
