#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while (x > 0 && n && x / 2 + 10 < x)
        {
            n--;
            x = x / 2 + 10;
        }
        if (x <= m * 10)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}