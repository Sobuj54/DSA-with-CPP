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
        int n;
        cin >> n;
        map<int, int> mp;
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                zeros++;
            else
                mp[x]++;
        }

        int sz = mp.size() + (zeros ? 1 : 0);
        if (sz == n)
        {
            cout << n << "\n";
            continue;
        }

        int p = 0;
        for (auto [x, y] : mp)
        {
            if (y >= 2)
            {
                p += y / 2;
                zeros += y / 2;
            }
        }
        n -= p;
        n -= (zeros - 1);
        cout << n << "\n";
    }
    return 0;
}