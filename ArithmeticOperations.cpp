// Arithmetic Operations:
// Write a programe that takes two numbers and an operator (+, -, *, /) as input. Use a switch statement to perform the specified operation.

#include <iostream>
using namespace std;

int main()
{

    // take the data type 
    int num1, num2;
    char op;

    // input the numbers from the user
    cout << "Enter the num1: ";
    cin >> num1;

    cout << "Enter the num2: ";
    cin >> num2;

    // input the operator from the user
    cout << "Enter the operator: ";
    cin >> op;

    // condition
    switch (op)
    {
    case '+':
        cout << "Result is: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Result is: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Result is: " << num1 * num2 << endl;
        break;

    case '/':
        cout << "Result is: " << (float)num1 / num2 << endl;
        break;

    default:
        cout << "Error! Please enter the correct operator.";
        break;
    }

}
