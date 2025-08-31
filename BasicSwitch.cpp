// Basic Switch Statement
// Write a C++ program that takes a number (1-5) as input and prints the following based on the input:

// 1 → "One"
// 2 → "Two"
// 3 → "Three"
// 4 → "Four"
// 5 → "Five"
// If the input is outside this range, print "Invalid Input."

#include <iostream>
using namespace std;

int main () {

    int num;

    cout << "Enter the num: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "One" << endl;
        break;

        case 2:
        cout << "Two" << endl;
        break;

        case 3:
        cout << "Three" << endl;
        break;

        case 4:
        cout << "Four" << endl;
        break;

        case 5:
        cout << "Five" << endl;
        break;
    
    default:
    cout << "Invalid number";
        break;
    }

}
