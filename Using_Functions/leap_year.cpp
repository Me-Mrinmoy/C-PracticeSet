#include <bits/stdc++.h>
using namespace std;

void checkYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << year << " is a leap year";
    }
    else 
    {
        cout << year << " is not a leap year";
    }
}

int main()
{
    int year;
    cout << "enter the year: ";
    cin >> year;

    checkYear(year);

    return 0;
}
