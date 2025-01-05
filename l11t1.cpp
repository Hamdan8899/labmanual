#include <iostream>
#include <string>
using namespace std;
int main() {
    int age, monthlyIncome, loanAmount;
    string existingLoan, defaultInLast3Years;
    // Input: Age, Monthly income, Loan amount, Existing loan status, Default status
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your monthly income: ";
    cin >> monthlyIncome;
    cout << "Enter the loan amount requested: ";
    cin >> loanAmount;
    cout << "Do you have an existing loan? (yes/no): ";
    cin >> existingLoan;
    cout << "Have you defaulted in the last 3 years? (yes/no): ";
    cin >> defaultInLast3Years;
    // Check age eligibility
    if (age < 21 || age > 60) {
        cout << "Loan Eligibility: Rejected" << endl; // Age is not in the eligible range
    }
    // Check for existing loan or default history
    else if (existingLoan == "yes" || defaultInLast3Years == "yes") {
        cout << "Loan Eligibility: Rejected" << endl; // Existing loan or past default
    } 
    else {
        // Check monthly income based on loan amount
        if (loanAmount > 500000) {
            if (monthlyIncome > 40000) {
                cout << "Loan Eligibility: Approved" << endl; // Income is sufficient for loan > 500,000
            } else {
                cout << "Loan Eligibility: Rejected" << endl; // Insufficient income for loan > 500,000
            }
        } else {
            if (monthlyIncome > 25000) {
                cout << "Loan Eligibility: Approved" << endl; // Income is sufficient for loan <= 500,000
            } else {
                cout << "Loan Eligibility: Rejected" << endl; // Insufficient income for loan <= 500,000
            }
        }
    }
    return 0;
}
