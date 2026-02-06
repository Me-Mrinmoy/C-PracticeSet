// Write a program to check if the number is even or odd.
// How to check this??
// When a number is divisible by 2 and the result is 0 this then the number is even, either the number is odd.

#include <iostream>
using namespace std;

int main () { 

    // takes an integar---
    int number;

    // input from user---
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "This number is even" << number << endl;
    }

    else {
        cout << "This number is odd" << number << endl;
    }
    

}


