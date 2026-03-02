#include <bits/stdc++.h>
using namespace std;

void checkTriangle(int a1, int a2, int a3)
{
    int sum = (a1 + a2 + a3);

    if (sum == 180 && a1 > 0 && a2 > 0 && a3 > 0)
    {
        cout << "this is a triangle\n";

        if (a1 == 60 && a2 == 60 && a3 == 60)
        {
            cout << "equilateral";
        }
        else if (a1 == a2 || a2 == a3 || a3 == a1)
        {
            cout << "iscoscalene";
        }
        else
        {
            cout << "scalene";
        }
    }
    else 
    {
        cout << "this is not a triangle";
    }
}

int main()
{
    int a1;
    cout << "enter the a1: ";
    cin >> a1;

    int a2;
    cout << "enter the a2: ";
    cin >> a2;

    int a3;
    cout << "enter the a3: ";
    cin >> a3;

    checkTriangle(a1, a2, a3);

    return 0;
}
