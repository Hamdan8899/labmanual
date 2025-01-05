#include<iostream>
using namespace std;
int main() {
    int n, evenCount = 0, oddCount = 0;
    // Ask user for input
    cout << "Enter a positive integer: ";
    cin >> n;
    // Input validation
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 0;
    }
    // Classify numbers as even or odd
    cout << "Classifying numbers as even or odd:" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " is even." << endl;
            evenCount++;
        }
        else {
            cout << i << " is odd." << endl;
            oddCount++;
        }
    }
    // Display results
    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;
    return 0;
}
