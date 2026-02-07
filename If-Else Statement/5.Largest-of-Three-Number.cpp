#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1;
    cout << "Enter the num1: ";
    cin >> num1;

    int num2;
    cout << "Enter the num2: ";
    cin >> num2;

    int num3;
    cout << "Enter the num3: ";
    cin >> num3;

    int largest = num1;

    if (num2 > num3)
    {
        cout << "Largest is: " << num2 << endl;
    }
    else if (num3 > num2)
    {
        cout << "Largest is: " << num3 << endl;
    }
    else 
    {
        cout << "Largest is: " << num1 << endl;
    }

    return 0;
}