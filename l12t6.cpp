#include <iostream>
using namespace std;
int main() {
    // Variables
    int item, quantity;
    double price, totalCost, finalCost;
    double discount = 0;
    // Display menu with prices
    cout << "Welcome to the Grocery Store!" << endl;
    cout << "1. Rice (Price: 100 per kg)" << endl;
    cout << "2. Wheat (Price: 120 per kg)" << endl;
    cout << "3. Oil (Price: 150 per liter)" << endl;
    cout << "4. Sugar (Price: 100 per kg)" << endl;
    cout << "Select an item (1-4): ";
    cin >> item;
    // Check if item selection is valid
    if (item >= 1 && item <= 4) {
        cout << "Enter quantity: ";
        cin >> quantity;
        // Check if quantity is valid (positive)
        if (quantity > 0) {
            // Determine price per item using if-else conditions
            if (item == 1) {
                price = 100; // Rice
            }
            else if (item == 2) {
                price = 120; // Wheat
            }
            else if (item == 3) {
                price = 150; // Oil
            }
            else if (item == 4) {
                price = 100; // Sugar
            }

            // Calculate total cost
            totalCost = price * quantity;

            // Apply discount based on total cost
            discount = (totalCost > 10000) ? 0.20 :
                      (totalCost >= 5000) ? 0.10 :
                      (totalCost > 5000) ? 0.05 : 0.0;

            // Calculate final cost after discount
            finalCost = totalCost - (totalCost * discount);
            // Output details
            cout << "Total cost: " << totalCost << endl;
            cout << "Discount: " << (discount * 100) << "%" << endl;
            cout << "Final cost: " << finalCost << endl;
        } else {
            // Invalid quantity (zero or negative)
            cout << "Invalid quantity. Please enter a positive number." << endl;
        }
    } else {
        // Invalid item selection
        cout << "Invalid item selection." << endl;
    }
    return 0;
}
