#include <iostream>
#include <string>
using namespace std;
int main() {
    string word1, word2;
    // Input two words from the user
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;
    // Compare the two words
    if (word1 == word2) {
        cout << "yes, the words are the same" << endl;
    } else {
        cout << "no, the words are different" << endl;
    }
    return 0;
}
