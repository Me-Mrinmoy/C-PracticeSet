// Check if a given number is positive, negative or zero.
// Input = -5.
// Output = Negative.

#include <iostream>
using namespace std;

int main() {

    // takes an integar num---
    int num;

    // takes an input from the user---
    cout << "Enter a number: ";
    cin >> num;

    // conditions---
    if (num > 0)
    {
        cout << num << " is a positive number" << endl;
    }
    else if (num < 0) 
    {
        cout << num << " is a negative number" << endl;
    }
    else if (num == 0) 
    {
        cout << num << " is zero" << endl;
    }
    else 
    {
        cout << "Please enter a valid number!";
    }

    return 0;
}

