#include<iostream>
using namespace std;
int main(){
    //declare sides of triangle
    float a, b, c;
    //input the three sides of triangle
    cout << "Enter the length of side A: ";
    cin >> a;
    cout << "Enter the length of side B: ";
    cin >> b;
    cout << "Enter the length of side C: ";
    cin >> c;
    //checking the sides by using if else
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Triangle. Sides must be greater than 0." << endl;
    }
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        } else if (a == b && b == c && a == c) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    } else {
        cout << "Invalid triangle. The sides do not satisfy the triangle inequality." << endl;
    }
    return 0;
}