//Check Eligibility to Vote
//Write a program to check if a person is eligible to vote (age ≥ 18).

#include <iostream>
using namespace std;

int main () {

    int age;

    // input from user --
    cout << "Enter your age: ";
    cin >> age;

    // conditions --  
    if (age >= 18 && age <= 100)
    {
        cout << age << " is Eligible to vote";
    }
    else 
    {
        cout << age << " is Not eligible to vote";
    }

    return 0;
}

