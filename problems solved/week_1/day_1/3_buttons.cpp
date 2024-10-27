#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int totalCoins = 0;
    for (int i = 0; i < 2; i++)
    {
        if (a >= b)
        {
            totalCoins += a;
            a--;
        }
        else
        {
            totalCoins += b;
            b--;
        }
    }

    cout << totalCoins << "\n";
    return 0;
}