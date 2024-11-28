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
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            ++mp[x];
        }
        int am = 0;
        for (auto &[x, y] : mp)
        {
            am = max(am, y);
        }
        int ans = 0;
        while (am < n)
        {
            int d = min(n - am, am);
            ans += 1 + d;
            am += d;
        }
        cout << ans << '\n';
    }
    return 0;
}