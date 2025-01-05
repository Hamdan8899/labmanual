#include <iostream>
using namespace std;
int main() {
    int n;
    int count = 0;
    // Prompt the user to input a number n
    cout << "Enter a number n: ";
    cin >> n;
    // Count numbers divisible by 3 between 1 and n
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            count++;  // Increment count if number is divisible by 3
        }
    }
    // Display the result
    cout << "There are " << count << " numbers divisible by 3 between 1 and " << n << "." << endl;
    return 0;
}
