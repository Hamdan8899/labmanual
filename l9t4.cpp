#include <iostream>
using namespace std;
int main() {
    // Declare variables
    float actualPrice, discount, netPayable;
    // Get the actual price input from the user
    cout << "Enter the actual price of the product: ";
    cin >> actualPrice;
    // Apply discount based on the given conditions
    if (actualPrice <= 5000) {
        // 5% discount for prices less than or equal to Rs. 5000
        discount = actualPrice * 5 / 100;
    } else {
        // 10% discount for prices greater than Rs. 5000
        discount = actualPrice * 10 / 100;
    }
    // Calculate the net payable price
    netPayable = actualPrice - discount;
    // Output the results
    cout << "Discount: Rs. " << discount << endl;
    cout << "Net payable: Rs. " << netPayable << endl;
    return 0;
}
