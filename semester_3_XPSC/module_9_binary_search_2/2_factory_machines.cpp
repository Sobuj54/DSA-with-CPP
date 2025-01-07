#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll productsProduced(vector<ll> &a, ll sec, ll t)
{
    ll totalSec = 0;
    for (auto x : a)
    {
        totalSec += sec / x;
        if (totalSec >= t)
            return totalSec;
    }
    return totalSec;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll l = 1, r = 1e18, res;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (productsProduced(a, mid, t) >= t)
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << res << "\n";
    return 0;
}