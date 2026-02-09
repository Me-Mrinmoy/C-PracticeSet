#include <bits/stdc++.h>
using namespace std;

int main()
{
    int angle1;
    cout << "Enter the angle1: ";
    cin >> angle1;

    int angle2;
    cout << "Enter the angle2: ";
    cin >> angle2;

    int angle3;
    cout << "Enter the angle3: ";
    cin >> angle3;

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        if (angle1 == 60 && angle2 == 60 && angle3 == 60)
        {
            cout << "Equilateral";
        }
        else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3)
        {
            cout << "Isosceles";
        }
        else
        {
            cout << "Scalene";
        }
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}
