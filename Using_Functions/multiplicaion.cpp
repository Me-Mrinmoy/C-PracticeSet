#include <bits/stdc++.h>
using namespace std;

void checkMultiply(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;

    checkMultiply(n);

    return 0;
}
