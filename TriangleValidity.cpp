//Check Triangle Validity
//Write a program to check if three angles can form a valid triangle (sum of angles = 180).

#include <iostream>
using namespace std;

int main () {

    // take integars which can be angles --
    int angle1;
    int angle2;
    int angle3;

    // input from user --
    cout << "Enter the angle1: ";
    cin >> angle1;

    cout << "Enter the angle2: ";
    cin >> angle2;

    cout << "Enter the angle3: ";
    cin >> angle3;

    // conditions --
    if (angle1 + angle2 + angle3 == 180) {
        cout << "This is a triangle" << endl;
    }

    else {
        cout << "This is not a triangle" << endl;
    }
}