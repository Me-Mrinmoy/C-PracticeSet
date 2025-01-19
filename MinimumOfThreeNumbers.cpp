// Find the Minimum of Three Numbers: 
// Write a function that takes three integers and returns the smallest one


#include <iostream>
using namespace std;

int main () {

    int num1;
    int num2;
    int num3;

    cout << "Enter the num1: ";
    cin >> num1;

    cout << "Enter the num2: ";
    cin >> num2;

    cout << "Enter the num3: ";
    cin >> num3;

    if (num1 < num2) {
        cout <<  "Smallest is: " << num1 << endl;
    }

    else if (num2 < num3) 
    {
        cout << "Smallest is: " << num2 << endl;
    }

    else if (num3 < num1)
    {
        cout << "Smallest is: " << num3 << endl;
    }
    
    
}