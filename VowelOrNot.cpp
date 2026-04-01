// Vowel or Consonant
// Write a program to check if a given character is a vowel or consonant.

#include <bi>
using namespace std;

int main() {

    // takes a character as ch---
    char ch;

    cout << "Enter the character to check if its vowel or not: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "This character is vowel" << ch << endl;
    }

    else if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        cout << "This character is consonent" << ch << endl;
    }

    else {
        cout << "Please check the character you input";
    }
}

