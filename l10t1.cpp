#include <iostream>
#include <string>
using namespace std;
string scholarshipEligibility(float percentage, float income, string extracurricular) {
    // Check if the score is at least 80%
    if (percentage >= 80) {
        // If score is above 90%, check family income
        if (percentage > 90) {
            if (income < 50000) {
                return "Full Scholarship";
            } else if (income <= 100000) {
                return "Half Scholarship";
            } else {
                return "No Scholarship";
            }
        }
        // If score is between 80% and 90%, check extracurricular participation
        else {
            if (extracurricular == "yes" || extracurricular == "Yes") {
                return "Partial Scholarship";
            } else {
                return "No Scholarship";
            }
        }
    }
    // If score is less than 80%, no scholarship
    else {
        return "No Scholarship";
    }
}
int main() {
    float percentage, income;
    string extracurricular;
    // Take input for percentage, income, and extracurricular participation
    cout << "Enter the percentage: ";
    cin >> percentage;
    cout << "Enter the family income: ";
    cin >> income;
    cout << "Did you participate in extracurricular activities? (yes/no): ";
    cin >> extracurricular;
    // print the scholarship eligibility
    cout << scholarshipEligibility(percentage, income, extracurricular) << endl;
    return 0;
}
