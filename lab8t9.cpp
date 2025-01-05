#include <iostream>
using namespace std;
int main() {
    // Declare a variable to store the 4-digit number
    int number, sum = 0;
    // Step 1: Input the 4-digit number from the user
    cout << "Enter a 4-digit number: ";
    cin >> number;
    // Step 2: Extract and sum the individual digits using modulus and division
    sum += number % 10;  // Add the last digit (units place)
    number /= 10;         // Remove the last digit
    sum += number % 10;  // Add the second last digit (tens place)
    number /= 10;         // Remove the second last digit
    sum += number % 10;  // Add the third last digit (hundreds place)
    number /= 10;         // Remove the third last digit
    sum += number % 10;  // Add the fourth last digit (thousands place)
    // Step 3: Output the sum of digits
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}
