// Write a program to calculate the shape areas ----


#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Options are...\n";
    cout << "1. Circle\n";
    cout << "2. Reactangle\n";
    cout << "3. Triangle\n";

  // takes data type---
    float radius;
    float length, breadth;
    float base, height;

  // takes choice as integar---
    int choice;
    cout << "Enter the choice: ";
    cin >> choice;

  // conditions---
    if (choice == 1)
    {
        cout << "Okey you want to calculate the shape area  of a circle\n";

        cout << "Enter the radius: \n";
        cin >> radius;

        cout << "Area of the circle is: " << 3.14 * radius * radius << endl;
    }
    else if (choice == 2)
    {
        cout << "Okey you want to calculate the shape area of a reactangle\n";

        cout << "Enter the length: \n";
        cin >> length;

        cout << "Enter the breadth: \n";
        cin >> breadth;


        cout << "Area of the reactangle is: " << length * breadth << endl;
    }
    else if (choice == 3)
    {
        cout << "Okey you want to calculate the shape area of a triangle\n";

        cout << "Enter the base: \n";
        cin >> base;

        cout << "Enter the height: \n";
        cin >> height;

        cout << "Area of the triangle is: " << 0.5 * base * height << endl;
    }
    else 
    {
        cout << "Invalid input\n";
    }

    return 0;
}
