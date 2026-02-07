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

    if (num1 < num2)
    {
        cout << "Largeset is: " << num2 << endl;
    }
    else
    {
        cout << "Largest is: " << num1 << endl;
    }

    return 0;
}