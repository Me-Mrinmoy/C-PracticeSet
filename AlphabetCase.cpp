//Check Alphabet Case
//Write a program to determine whether an input character is uppercase or lowercase.

#include <iostream>
using namespace std;

int main () {

    // take a character -
    char ch;

    // input from user --
    cout << "Enter a character: ";
    cin >> ch;

    // conditions --
    if (ch >= 'A' && ch <= 'Z') 
    {
        cout << "This character is uppercase letter" << ch << endl;
    }

    else if (ch >= 'a' && ch <= 'z') {
        cout << "This  is a lowercase letter" << ch << endl;
    }

    else {
        cout << "Please enter a valid character";
    }

}
