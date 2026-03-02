#include <bits/stdc++.h>
using namespace std;

void checkN(int n1, int n2)
{
    if (n1 > n2)
    {
        cout << n1 << " is largest";
    }
    else 
    {
        cout << n2 << " is largest";
    }
}

int main()
{
    int n1;
    cout << "enter the n1: ";
    cin >> n1;

    int n2;
    cout << "enter the n2: ";
    cin >> n2;

    checkN(n1, n2);

    return 0;
}
