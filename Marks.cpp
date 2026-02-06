//Write a program to calculate the grade of a student based on the following criteria:

//Marks >= 80 and < 90: Grade B
//Marks >= 70 and < 80: Grade C
//Marks >= 60 and < 70: Grade D
//Marks < 60: Fail

#include <bits/stdc++.h>
using namespace std;

int main() {

    // takes an integar---
    int marks;

    // input from user---
    cout << "Enter the marks: ";
    cin >> marks;

    // conditions---
    if (marks >= 90) 
    {
        cout << "A";
    }
    else if (marks >= 80 && marks <= 90)
    {
        cout << "B";
    }
    else if (marks >= 70 && marks <= 80) 
    {
        cout << "C";
    }
    else if (marks >= 60 && marks <= 70)
    {
        cout << "D";
    }
    else if (marks >= 50 && marks <= 60)
    {
        cout << "E";
    }

    else 
    {
        cout << "You are fail go and revise";
    }

    return 0;

}

