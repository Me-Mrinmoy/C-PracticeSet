#include <iostream>
using namespace std;

int main() {
    float hardness, carbonContent, tensileStrength;

    // Prompt user for input
    cout << "Enter Hardness: ";
    cin >> hardness;
    cout << "Enter Carbon Content: ";
    cin >> carbonContent;
    cout << "Enter Tensile Strength: ";
    cin >> tensileStrength;

    // Check conditions
    bool condition1 = hardness > 50;
    bool condition2 = carbonContent < 0.7;
    bool condition3 = tensileStrength > 5600;

    int grade;

    // Determine grade based on conditions
    if (condition1 && condition2 && condition3) {
        grade = 10;
    } else if (condition1 && condition2) {
        grade = 9;
    } else if (condition2 && condition3) {
        grade = 8;
    } else if (condition1 && condition3) {
        grade = 7;
    } else if (condition1 || condition2 || condition3) {
        grade = 6;
    } else {
        grade = 5;
    }

    // Output the result
    cout << "The Steel Grade is: " << grade << endl;

    return 0;
}
