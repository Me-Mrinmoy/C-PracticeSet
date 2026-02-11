// Write a number to check if the number is even or odd---
// Even - When a number is divided by 2 and the divisible will be 0 then we call it even.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the num: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;

}



