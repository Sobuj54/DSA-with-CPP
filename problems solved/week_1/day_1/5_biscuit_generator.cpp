#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;

    int totalBiscuits = 0, i = 1;
    while (a * i <= t)
    {
        totalBiscuits += b;
        i++;
    }

    cout << totalBiscuits << "\n";
    return 0;
}