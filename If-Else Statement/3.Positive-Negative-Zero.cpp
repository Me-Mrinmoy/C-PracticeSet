#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The number is positive." << endl;
    }
    else if (num < 0)
    {
        cout << "The number is negative." << endl;
    }
    else if (num == 0)
    {
        cout << "The number is zero." << endl;
    }
    else 
    {
        cout << "Invalid input." << endl;
    }

    return 0;
}