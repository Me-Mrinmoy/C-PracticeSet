#include <bits/stdc++.h>
using namespace std;

void checkAge(int age)
{
    if (age >= 18 && age <= 100)
    {
        cout << age << " is eligible to vote";
    }
    else
    {
        cout << age << " is not eligible to vote";
    }
}

int main()
{
    int age;
    cout << "enter the age: ";
    cin >> age;

    checkAge(age);

    return 0;
}
