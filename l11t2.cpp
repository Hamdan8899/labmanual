#include <iostream>
#include <string>
using namespace std;
int main() {
    int experience, age;
    string degreeStatus, convictionStatus;
    // Input: Experience, Age, Degree status, Conviction status
    cout << "Enter years of experience: ";
    cin >> experience;
    cout << "Enter age: ";
    cin >> age;
    cout << "Do you have a degree? (yes/no): ";
    cin >> degreeStatus;
    cout << "Have you been convicted of a crime? (yes/no): ";
    cin >> convictionStatus;
    // Check for job eligibility
    if (age < 21) {
        cout << "Job Eligibility: Not Eligible" << endl; 
    }
    else if (convictionStatus == "yes") {
        cout << "Job Eligibility: Not Eligible" << endl; 
    }
    else if (experience < 2) {
        cout << "Job Eligibility: Not Eligible" << endl; 
    }
    else if (experience < 5) {
        // Experience is between 2 and 5 years, so degree is required
        if (degreeStatus == "yes") {
            cout << "Job Eligibility: Eligible" << endl; 
        } else {
            cout << "Job Eligibility: Not Eligible" << endl; 
        }
    }
    else {
        // Experience is 5 or more years, degree is not required
        cout << "Job Eligibility: Eligible" << endl; 
    }
    return 0;
}
