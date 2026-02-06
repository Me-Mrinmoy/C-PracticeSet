//Check Leap Year
//Write a program to check whether a given year is a leap year.
// Conditions -- 
// 1. year is divide by 4 and the result is 0 and divide by 100 and the result is not 0 then the year is leap year.
// 2. year is divide by 400 and the result is 0 then the year is leap year.

#include <iostream>
using namespace std;

int main (){

    // take an integar --
    int year;

    // input from user --
    cout << "Enter the year to check if its leap year or not";
    cin >> year;

    // conditions --
    if (year % 400 == 0) {
        cout << "This is a leap year" << year << endl;
    }

    else if (year % 4 == 0) {
        cout << "This is a leap year" << year << endl;
    }

    else if (year % 100 == 0) {
        cout << "This is not a leap year" << year << endl;
    }

    else {
        cout << "This is not a leap year" << year << endl;
    }

}

