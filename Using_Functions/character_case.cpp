#include <bits/stdc++.h>
using namespace std;

void checkCharacter(char ch)
{
    if (ch >= 'A' || ch <= 'Z')
    {
        cout << ch << " is uppercase.\n";

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << ch << " is vowel";
        }
        else 
        {
            cout << ch << " is consonent";
        }
    }
    else if (ch >= 'a' || ch <= 'z')
    {
        cout << ch << " is lowercase.\n";

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << ch << " is vowel";
        }
        else
        {
            cout << ch << " is consonent";
        }
    }
    else 
    {
        cout << "invaid";
    }
}

int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;

    checkCharacter(ch);

    return 0;
}
