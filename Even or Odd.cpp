// Write a program to check if the number is even or odd.
// How to check this??

#include <iostream>
using namespace std;

int main () { 

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "This number is even" << number << endl;
    }

    else {
        cout << "This number is odd" << number << endl;
    }
    

}

