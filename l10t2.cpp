#include <iostream>
using namespace std;
string admissionStatus(float marks, int satScore) {
    // If marks are less than 60%, reject the student
    if (marks < 60) {
        return "Rejected";
    }
    // If marks are between 60% and 75%, check SAT score
    else if (marks >= 60 && marks < 75) {
        if (satScore >= 1200) {
            return "Admitted with SAT Requirement";
        } else {
            return "Rejected";
        }
    }
    // If marks are above 75%, SAT score is optional, admit the student
    else {
        return "Admitted";
    }
}
int main() {
    float marks;
    int satScore;
    // Take input for high school marks and SAT score
    cout << "Enter the High School Marks: ";
    cin >> marks;
    cout << "Enter the SAT Score: ";
    cin >> satScore;
    // check admission status and print the result
    cout << admissionStatus(marks, satScore) << endl;
    return 0;
}
