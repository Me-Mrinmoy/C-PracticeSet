#include <bits/stdc++.h>
using namespace std;

void checkDivide(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " / " << i << " = " << (float)n/i << endl;
    }
}

int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;

    checkDivide(n);

    return 0;
}
