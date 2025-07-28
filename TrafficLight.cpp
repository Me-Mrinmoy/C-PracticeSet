#include <iostream>
using namespace std;

int main (){

    int choice;

    cout << "Options are...\n";
    cout << "1.Red\n";
    cout << "2.Green\n";
    cout << "3.Yellow\n";


    cout << "Enter your choice: ";
    cin >> choice;

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
}
