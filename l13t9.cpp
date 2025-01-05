#include <iostream>
using namespace std;
int main() {
    int n; 
    // Prompt the user to input a number n
    cout << "Enter a number n: ";
    cin >> n;
    int sum = 0;  // Variable to store the sum of odd numbers 
    // Loop through all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {  // Check if the number is odd (i.e., remainder is 1)
            sum += i;  // Add the odd number to the sum
        }
    }
    // Output the result
    cout << "The sum of all odd numbers between 1 and " << n << " is: " << sum << endl;
    return 0;
}
