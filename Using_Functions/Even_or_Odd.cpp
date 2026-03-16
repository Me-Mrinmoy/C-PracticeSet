#include <bits/stdc++.h>
using namespace std;

// 
void checkN(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is even.";
    }
    else 
    {
        cout << n << " is odd.";
    }
}

int main()
{
    // takes an integar n---
    int n;
    cout << "enter the n: ";
    cin >> n;

    checkN(n);

    return 0;
}
