#include <iostream>
using namespace std;
int main() {
    // Declare variables for length, width, and area
    float length, width, area;
    // Prompt the user to enter the length of the fence in feet
    cout << "Enter the length of the fence in feet: ";
    cin >> length;
    // Prompt the user to enter the width of the fence in feet
    cout << "Enter the width of the fence in feet: ";
    cin >> width;
    // Calculate the area using the formula: Area = Length * Width
    area = length * width;
    // Output the area of the fence
    cout << "The area of the rectangular fence is: " << area << " square feet." << endl;
    return 0;
}
