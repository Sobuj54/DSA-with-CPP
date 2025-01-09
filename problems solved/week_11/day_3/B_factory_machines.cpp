#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    // lamda function
    auto productsProduced = [&](ll time)
    {
        ll totalProduct = 0;
        for (auto x : a)
        {
            totalProduct += time / x;
            if (totalProduct >= t)
                return totalProduct;
        }
        return totalProduct;
    };

    ll l = 1,
       r = 1e18, res;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (productsProduced(mid) >= t)
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