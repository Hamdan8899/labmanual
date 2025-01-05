#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
using namespace std;
int main( ) {
    srand(time(0)); // Seed random number generator with the current time
    int randomNumber = (rand() / 100) + 1; // Generate a random number
    //cout << randomNumber << endl;
    int guess = 0, attempts = 0;
    cout << "Guess the number: ";
    while (true) {
        cin >> guess;  
        attempts++;
        // Check if the guess is correct (equal to randomNumber)
        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            break;  // Exit the loop when the correct guess is made
        }
        // If the guess is not correct, check if it's too high or too low
        else if(guess < randomNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Too high! Try again: ";
        }
    }
    // Display the number of attempts
    cout << "It took you " << attempts << " tries to guess the correct number." << endl;
    return 0;
}
