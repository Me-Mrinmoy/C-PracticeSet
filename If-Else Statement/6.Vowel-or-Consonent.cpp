#include <bits/stdc++.h>
using namespace std;

int main()
{
    char op;
    cout << "Enter an character: ";
    cin >> op;

    if (op == 'a' || op == 'e' || op == 'i' || op == 'o' || op == 'u' ||
    op == 'A' || op == 'E' || op == 'I' || op == 'O' || op == 'U')
    {
        cout << op << " is a vowel." << endl;
    }
    else
    {
        cout << op << " is a consonant." << endl;
    }

    return 0;
}