#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "This number is positive" << number << endl;
    }

    if (number < 0) {
        cout << "This number is negative" << number << endl;
    }

    else if (number == 0) {
        cout << "This is zero" << number << endl;
    }

    else {
        cout << "Please enter a valid number!";
    }
}