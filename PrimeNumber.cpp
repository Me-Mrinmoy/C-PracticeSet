// Check Prime Number: 
// Write a function that checks if a given number is prime.

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

