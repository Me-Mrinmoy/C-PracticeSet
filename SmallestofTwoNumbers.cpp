//Find the Smallest of Two Numbers
//Write a program to find the smallest of two numbers entered by the user.

#include <iostream>
using namespace std;

int main () {

    // take an integars which can be numbers --
    int number1;
    int number2;

    // input from users --
    cout << "Enter the number1: ";
    cin >> number1;

    cout << "Enter the number2: ";
    cin >> number2;

    // conditions --
    if (number1 < number2) {
        cout << "This is a smallest number" << number1 << endl;
    }

    else if (number1 > number2) {
        cout << "This is a smallest number" << number2 << endl;
    }

    else {
        cout << "Please enter the valid number or maybe there is no smallest number";
    }
}