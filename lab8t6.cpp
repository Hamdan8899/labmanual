#include <iostream>
using namespace std;
int main() {
    // Declare variables for initial velocity, acceleration, time, and final velocity
    float initialVelocity, acceleration, time, finalVelocity;
    // Input values from the user
    cout << "Enter the initial velocity (in m/s): ";
    cin >> initialVelocity;
    cout << "Enter the acceleration (in m/s^2): ";
    cin >> acceleration;
    cout << "Enter the time (in seconds): ";
    cin >> time;
    // Calculate the final velocity using the formula
    finalVelocity = initialVelocity + (acceleration * time);
    // Output the final velocity
    cout << "The final velocity of the car is: " << finalVelocity << " m/s" << endl;
    // End the program
    return 0;
}