#include <iostream>
using namespace std;  // Allows use of cout, cin, etc. without std:: prefix
int main() {
    // Declare variables
    int a, b, c;
    int MA1, MA2, MA3;  // Memory cells for intermediate results
    // Input values
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    // Step 1: Compute (b + c) and store in MA1
    MA1 = b + c;
    cout << "MA1 (b + c) = " << MA1 << endl;
    // Step 2: Compute a * MA1 and store in MA2
    MA2 = a * MA1;
    cout << "MA2 (a * (b + c)) = " << MA2 << endl;
    // Step 3: Compute (a + c) and store in MA3
    MA3 = a + c;
    cout << "MA3 (a + c) = " << MA3 << endl;
    // Step 4: Compute c * MA3
    int result2 = c * MA3;
    cout << "Intermediate result (c * (a + c)) = " << result2 << endl;
    // Step 5: Compute the final result (MA2 + result2)
    int finalResult = MA2 + result2;
    cout << "Final result = " << finalResult << endl;
    return 0;
}
