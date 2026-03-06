#include <bits/stdc++.h>
using namespace std;

void checkN(int n)
{
    if (n > 0)
    {
        cout << "positive" << endl;
    }
    else if (n < 0)
    {
        cout << "negative" << endl;
    }
    else
    {
        cout << "zero" << endl;
    }
}

int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;

    checkN(n);
    return 0;
}
