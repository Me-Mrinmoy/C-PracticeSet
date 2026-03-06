#include <bits/stdc++.h>
using namespace std;

void checkRemain(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " % " << i << " = " << n % i << endl;
    }
}

int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;

    checkRemain(n);

    return 0;
}
