#include <iostream>
using namespace std;
string gradeAwarded(int marks, int attendance) {
    // Check if attendance is above 75%
    if (attendance > 75) {
        // Grade based on marks if attendance is above 75%
        if (marks >= 85) {
            return "Grade A";
        } else if (marks >= 80) {
            return "Grade A-";
        } else if (marks >= 75) {
            return "Grade B+";
        } else if (marks >= 70) {
            return "Grade B";
        } else if (marks >= 65) {
            return "Grade C+";
        } else if (marks >= 60) {
            return "Grade C";
        } else if (marks >= 55) {
            return "Grade D+";
        } else if (marks >= 50) {
            return "Grade D";
        } else {
            return "Grade F";
        }
    } else {
        // If attendance is 75% or less, the grade will be based on marks directly
        if (marks >= 85) {
            return "Grade A";
        } else if (marks >= 80) {
            return "Grade A-";
        } else if (marks >= 75) {
            return "Grade B+";
        } else if (marks >= 70) {
            return "Grade B";
        } else if (marks >= 65) {
            return "Grade C+";
        } else if (marks >= 60) {
            return "Grade C";
        } else if (marks >= 55) {
            return "Grade D+";
        } else if (marks >= 50) {
            return "Grade D";
        } else {
            return "Grade F";
        }
    }
}
int main() {
    int marks, attendance;
    // Take input for marks and attendance
    cout << "Enter Marks: ";
    cin >> marks;
    cout << "Enter Attendance Percentage: ";
    cin >> attendance;
    // check the grade and print it
    cout << gradeAwarded(marks, attendance) << endl;
    return 0;
}
