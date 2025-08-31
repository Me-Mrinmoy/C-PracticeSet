#include <iostream>
using namespace std;

int main() {
    // Variables to hold temperature values
    double temperature;
    char choice;

    // Prompt the user for conversion choice
    cout << "Temperature Converter" << endl;
    cout << "Enter 'C' to convert from Celsius to Fahrenheit." << endl;
    cout << "Enter 'F' to convert from Fahrenheit to Celsius." << endl;
    cout << "Your choice: ";
    cin >> choice;

    // Check the user's choice and perform the conversion
    if (choice == 'C' || choice == 'c') {
        // Celsius to Fahrenheit conversion
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double fahrenheit = (temperature * 9.0 / 5.0) + 32;
        cout << temperature << " Celsius is " << fahrenheit << " Fahrenheit." << endl;
    } 
    else if (choice == 'F' || choice == 'f') {
        // Fahrenheit to Celsius conversion
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        double celsius = (temperature - 32) * 5.0 / 9.0;
        cout << temperature << " Fahrenheit is " << celsius << " Celsius." << endl;
    } 
    else {
        // Invalid choice
        cout << "Invalid choice! Please enter 'C' or 'F'." << endl;
    }

    return 0;
}

