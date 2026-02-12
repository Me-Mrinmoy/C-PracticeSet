// Write


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int unit;
    cout << "Enter the electricity unit: "; 
    cin >> unit;

    if (unit == 100)
    {
        cout << "First Unit Free";
    }
    else if (unit >= 101 && unit <= 200)
    {
        cout << "Total cost is: " << 5 * unit << endl;
    }
    else if (unit >= 201 && unit <= 300)
    {
        cout << "Total cost is: " << 10 * unit << endl;
    }
    else if (unit > 300)
    {
        cout << "Total cost is: " << 12 * unit << endl;
    }
    else 
    {
        cout << "Invalid input" << endl;
    }

    return 0;

}


