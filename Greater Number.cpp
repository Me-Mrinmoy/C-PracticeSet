//Find the Greater Number
//Write a program to find the greater of two numbers.

#include <bits/stdc++.h>
using namespace std;

int main () {

    // takes two integars---
    int number1;
    int number2;

    // input from users --
    cout << "Enter the number1: ";
    cin >> number1;

    cout << "Enter the number2: ";
    cin >> number2;
    
    // conditions --
    if (number1 > number2)
    {
        cout << "This is a greater number" << number1 << endl;
    }
    else if (number1 < number2)
    {
        cout << "This is a greater number" << number2 << endl;
    }
    else
    {
        cout << "Please enter a valid number!";
    }

    return 0;

}


