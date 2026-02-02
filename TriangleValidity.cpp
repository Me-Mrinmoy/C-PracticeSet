//Check Triangle Validity
//Write a program to check if three angles can form a valid triangle (sum of angles = 180).
//Also check what kind of triangle it is--
//1. Equilateral(when three angles are same)
//2. Isosceles(when any two angles are same)
//3. Scalene(when all the angles are different degrees)

#include <iostream>
using namespace std;

int main () {

    // take integars which can be angles --
    int angle1;
    int angle2;
    int angle3;

    // input from user --
    cout << "Enter the angle1: ";
    cin >> angle1;

    cout << "Enter the angle2: ";
    cin >> angle2;

    cout << "Enter the angle3: ";
    cin >> angle3;

    // takes an integar which is sum 
    int sum = (angle1 + angle2 + angle3)

    // conditions --
    if (sum == 180 && angle > 0 && angle2 > 0 && angle3 > 0)
    {
        cout << "Okey this is an triangle! Now check it what kind of triangle it is---" << endl;

        if (angle1 == 60 && angle2 == 60 && angle3 == 60)
        {
            cout << "This is an Equilateral triangle";
        }
        else if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1)
        {
            cout << "This is an Isosceles triangle";
        }
        else if (angle1 || angle2 || angle3)
        {
            cout << "This is a Scalene triangle";
        }
        else 
        {
            cout << "Invalid input";
        }
    }
    else 
    {
        cout << "This is not an triangle check the input the sum of the three angles should be 180 then we call it a triangle";
    }

    return 0;
    
}

