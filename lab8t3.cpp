#include <iostream>
using namespace std;
int main() {
    double usd, pkr;
    // Prompt the user to enter the value in USD
    cout << "Enter value in USD: ";
    // Input the value in USD
    cin >> usd;
    // Convert USD to PKR
    pkr = usd * 170;
    // Print the converted amount in PKR
    cout << "The equivalent value in PKR is: " << pkr << endl;
    // End the program
    return 0;
}
