#include <iostream>
using namespace std;
int main() {
    int units;
    float totalBill;
    // Input: Units consumed
    cout << "Enter units consumed: ";
    cin >> units;
    // Step 1: Calculate the bill based on units consumed
    if (units <= 100) {
        totalBill = units * 5;  
    } 
    else if (units <= 300) {
        totalBill = 100 * 5 + (units - 100) * 7;  
    } 
    else {
        totalBill = 100 * 5 + 200 * 7 + (units - 300) * 10;  
    }
    // Step 2: Check if surcharge is applicable
    if (totalBill > 1000) {
        totalBill += totalBill * 0.05; 
    }
    // Step 3: Output the total bill
    cout << "Total Bill: Rs. " << totalBill << endl;
    return 0;
}
