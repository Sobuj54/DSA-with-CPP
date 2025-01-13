#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 0, r = 2e9 + 7;
        while (l < r)
        {
            ll mid = l + (r - l + 1) / 2;
            ll tot = 0;
            for (int i = 0; i < n; i++)
            {
                tot += max(mid - a[i], 0LL);
            }
            if (tot <= x)
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << l << endl;
    }
    return 0;
}