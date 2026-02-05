// Write a program to perform the (+, -, *, /) operations
// Takes two number from the user and also an operator and perform the operation ---

#include <bits/stdc++.h>
using namespace std;

int main()
{

  // takes two integars---
    int num1;
    int num2;

  // take operator as op---
    char op;
    cout << "Enter an operato: ";
    cin >> op;

  // conditions---
    if (op == '+')
    {
        cout << "Okey you want the addition: " << endl;
        cout << "Enter the num1: " << endl;
        cin >> num1;

        cout << "Enter the num2: " << endl;
        cin >> num2;

        cout << "Result is: " << num1 + num2 << endl;
    }
    else if (op == '-')
    {
        cout << "Okey you want to perform subtraction: " << endl;

        cout << "Enter the num1: " << endl;
        cin >> num1;

        cout << "Enter the num2: " << endl;
        cin >> num2;

        cout << "Result is: " << num1 - num2 << endl;
    }
    else if (op == '*')
    {
        cout << "Okey you want to perform multiplicaion: " << endl;

        cout << "Enter the num1: " << endl;
        cin >> num1;

        cout << "Enter the num2: " << endl;
        cin >> num2;

        cout << "Result is: " << num1 * num2 << endl;
    }
    else if (op == '/')
    {
        cout << "Okey you want to perform division: " << endl;

        cout << "Enter the num1: " << endl;
        cin >> num1;

        cout << "Enter the num2: " << endl;
        cin >> num2;

        cout << "Result is: " << num1 / num2 << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}
