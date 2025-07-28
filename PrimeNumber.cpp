// Check Prime Number: 
// Write a function that checks if a given number is prime.

#include <iostream>
using namespace std;

int main () {

    int num;

    cout << "Enter the num: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "This number is prime";
    }

    else {
        cout << "This number is not prime";
    }
}
