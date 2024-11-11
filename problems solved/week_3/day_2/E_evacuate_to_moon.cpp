#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> cars(n), outlets(m);

        for (ll i = 0; i < n; i++)
            cin >> cars[i];
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            outlets[i] = x * h;
        }

        sort(cars.rbegin(), cars.rend());
        sort(outlets.rbegin(), outlets.rend());

        ll total = 0;
        for (ll i = 0; i < min(n, m); i++)
        {
            total += min(cars[i], outlets[i]);
        }

        cout << total << "\n";
    }
    return 0;
}