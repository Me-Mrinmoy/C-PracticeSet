//Check Divisibility
//Write a program to check whether a number is divisible by 5.

#include <iostream>
using namespace std;

int main () {

    // take a integar which can be number --
    int number;

    // input from user --
    cout << "Enter a number: ";
    cin >> number;

    // conditions -- 
    if (number % 5 == 0) {
        cout << "This number can be divisible" << number << endl;
    }

    else {
        cout << "This number can not be divisible" << number << endl;
    }


}
