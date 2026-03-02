#include <bits/stdc++.h>
using namespace std;

void checkSteel(float hardness, float carbon_content, float tensile_strength)
{
    bool c1 = (hardness > 50);
    bool c2 = (carbon_content < 0.7);
    bool c3 = (tensile_strength > 5600);

    if (c1 && c2 && c3)
    {
        cout << "10";
    }
    else if (c1 && c2)
    {
        cout << "9";
    }
    else if (c2 && c3)
    {
        cout << "8";
    }
    else if (c3 && c1)
    {
        cout << "7";
    }
    else
    {
        cout << "6";
    }
    
}

int main()
{
    float hardness;
    cout << "enter the hardness: ";
    cin >> hardness;

    float carbon_content;
    cout << "enter the carbon content: ";
    cin >> carbon_content;

    float tensile_strength;
    cout << "enter the tensile_strength: ";
    cin >> tensile_strength;

    checkSteel(hardness, carbon_content, tensile_strength);

    return 0;
}
