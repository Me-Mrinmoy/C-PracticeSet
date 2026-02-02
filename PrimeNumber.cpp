// Check Prime Number: 
// Write a function that checks if a given number is prime.
// What is prime number??
// A whole number greater than 1 that cannot be exactly divided by any whole number other than itself and 1.
// Example - (2, 3, 5, 7, 11).

#include <bits/stdc++.h>
using namespace std;

int main () {

    // takes an integar num---
    int num;

    // input from user---
    cout << "Enter the num: ";
    cin >> num;

    // conditions---
    if (num % 2 == 0) 
    {
        cout << "This number is prime";
    }
    else 
    {
        cout << "This number is not prime";
    }

    return 0;
}


