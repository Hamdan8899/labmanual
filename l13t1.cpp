#include <iostream>
using namespace std;
int main() {
    //store the variables
    int num, reversed =0, sum =0;
    //input the number
    cout << "Enter a number: ";
    cin >> num;
    //using the while loop
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        sum += digit;
        num /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
