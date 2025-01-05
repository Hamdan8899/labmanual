#include <iostream>
using namespace std;
int main() {
    // Declare variables to store the student's name, marks, and total percentage
    string studentName;
    float subject1, subject2, subject3, subject4, subject5, totalMarks, percentage;
    // Input the student's name
    cout << "Enter your name: ";
    cin >> studentName;
    // Input the marks for each subject
    cout << "Enter subject 1 marks: ";
    cin >> subject1;
    cout << "Enter subject 2 marks: ";
    cin >> subject2;
    cout << "Enter subject 3 marks: ";
    cin >> subject3;
    cout << "Enter subject 4 marks: ";
    cin >> subject4;
    cout << "Enter subject 5 marks: ";
    cin >> subject5;
    // Calculate the total marks obtained
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    // Calculate the percentage
    percentage = (totalMarks / 500) * 100;
    // Output the student's name, total marks, and percentage
    cout << "\nStudent Name: " << studentName << endl;
    cout << "Total Marks Obtained: " << totalMarks << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}
