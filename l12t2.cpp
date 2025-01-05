#include<iostream>
using namespace std;
int main(){
    //variables to store codes
    int mathScore, englishScore;
    float overallPercentage;
    cout << "Enter the Math score: ";
    cin >> mathScore;
    cout << "Enter the English score: ";
    cin >> englishScore;
    cout << "Enter the overall percentage: ";
    cin >> overallPercentage;
    //check scholarship eligibilty
    if ((mathScore >= 85) && (englishScore >= 80) && (overallPercentage > 90)) {
        cout << "Eligible for Scholarship." << endl;
    } else {
        cout << "Not Eligible." << endl;
    }
    return 0;
}