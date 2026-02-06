// Find the Largest of Three Numbers: 
// Write a function that takes three integers and returns the largest one.

#include <bits/stdc++.h>
using namespace std;

int main () {

    // takes three integars---
    int num1;
    int num2;
    int num3;

    // input from user---
    cout << "Enter the num1: ";
    cin >> num1;

    cout << "Enter the num2: ";
    cin >> num2;

    cout << "Enter the num3: ";
    cin >> num3;

    // conditions---
    if (num1 > num2)
    {
        cout << "Largest is: " << num1 << endl;
    }
    else if (num2 > num3) 
    {
        cout << "Largest is: " << num2 << endl;
    }
    else if (num3 > num2)
    {
        cout << "Largest is: " << num3 << endl;
    }
    else
    {
        cout << "There is no largest number please enter the number correctly" << endl;
    }


    return 0;
}

