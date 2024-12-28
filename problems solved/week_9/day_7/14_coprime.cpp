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
        int n, mx = 0;
        cin >> n;
        map<int, int> mp;
        vector<int> a(n + 1), b(n + 1);
        set<int> se;
        vector<pair<int, int>> v;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }
        for (auto x : mp)
        {
            for (auto k : mp)
            {
                if (__gcd(k.first, x.first) == 1)
                {
                    mx = max(mx, (k.second + x.second));
                }
            }
        }
        if (mx)
            cout << mx << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}