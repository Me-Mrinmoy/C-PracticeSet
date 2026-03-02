#include <bits/stdc++.h>
using namespace std;

void checkUnit(int unit)
{
    if (unit == 100)
    {
        cout << "first 100 unit is free";
    }
    else if (unit >= 101 && unit <= 200)
    {
        cout << "cost is: " << unit * 5;
    }
    else if (unit >= 201 && unit <= 300)
    {
        cout << "cost is: " << unit * 10;
    }
    else if (unit > 300)
    {
        cout << "cost is: " << unit * 12;
    }
    else 
    {
        cout << "invalid";
    }
}

int main()
{
    int unit;
    cout << "enter the unit: ";
    cin >> unit;

    checkUnit(unit);

    return 0;
}
