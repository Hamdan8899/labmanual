#include <iostream>
using namespace std;
int main() {
    double bid;  // Variable to store each bid
    double highestBid = 0.0;  // Variable to keep track of the highest bid
    // Prompt the user to input 5 bids
    cout << "Enter 5 bids:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Bid " << i << ": ";
        cin >> bid;
        // Check if the current bid is higher than the current highest bid
        if (bid > highestBid) {
            highestBid = bid;  // Update highest bid if the current bid is higher
        }
    }
    // Display the highest bid
    cout << "The highest bid is: " << highestBid << endl;
    return 0;
}
