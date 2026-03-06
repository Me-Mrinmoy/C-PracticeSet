#include <bits/stdc++.h>
using namespace std;

void checkSub(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " - " << i << " = " << n - i << endl;
    }
}

int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;

    checkSub(n);

    return 0;
}
