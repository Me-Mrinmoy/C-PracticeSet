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
    if (age >= 18) {
        cout << "You can vote" << age << endl;
    }

    if (age > 100 || age < 1) {
        cout << "Invalid age" << age << endl;
    }

    else {
        cout << "You can not vote" << age << endl;
    }
}