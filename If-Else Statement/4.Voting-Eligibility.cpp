#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligibility to vote" << endl;
    }
    else 
    {
        cout << "Not eligible to vote" << endl;
    }

    return 0;
}