#include <iostream>
using namespace std;

int main (){

    // takes an integar choice---
    int choice;

    // describe the conditions---
    cout << "Options are...\n";
    cout << "1.Red\n";
    cout << "2.Green\n";
    cout << "3.Yellow\n";


    // take input from the user---
    cout << "Enter your choice: ";
    cin >> choice;

    // conditions---
    switch (choice)
    {
    case 1:
        cout << "Stop";
        break;

        case 2:
        cout << "Go";
        break;

        case 3:
        cout << "Ready";
        break;
    
    default:
    cout << "Please enter the correct light!";
        break;
    }

    return 0;
}

