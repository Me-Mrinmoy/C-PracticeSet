#include <iostream>
using namespace std;

int main (){

    int choice;
    int length;
    int width;
    int base;
    int height;
    float radius;

    cout << "Options are...\n";
    cout << "1.Circle\n";
    cout << "2.Reactangle\n";
    cout << "3.Trinagle\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the width: ";
    cin >> width;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the height: ";
    cin >> height;

    cout << "Enter the radius: ";
    cin >> radius;

    switch (choice)
    {
    case 1:
        cout << "Area of a Circle is: " << 3.14 * radius * radius << endl;
        break;

        case 2: 
        cout << "Area of a Reactangle is: " << length * width << endl;
        break;

        case 3:
        cout << "Area of a Triangle is: " << float (0.5 * base * height) << endl;
        break;
    
    default:
    cout << "Please enter the valid number!";
        break;
    }


}