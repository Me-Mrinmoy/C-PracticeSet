// Write a program to calculate the electricity bill--- 
// If user enter 100 unit then---
// First 100 unit is free.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    // takes unit as an integar---
    int unit;
    cout << "Enter the electricity unit: "; 
    cin >> unit;

    // condition---
    if (unit == 100)
    {
        cout << "First Unit Free";
    }
    else if (unit >= 101 && unit <= 200)
    {
        cout << "Total cost is: " << 5 * unit << endl;
    }
    else if (unit >= 201 && unit <= 300)
    {
        cout << "Total cost is: " << 10 * unit << endl;
    }
    else if (unit > 300)
    {
        cout << "Total cost is: " << 12 * unit << endl;
    }
    else 
    {
        cout << "Invalid input" << endl;
    }

    return 0;

}






