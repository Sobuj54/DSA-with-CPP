#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        mp[a]++;
    }

    ll total = 0;
    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        if (mp.find(a) != mp.end())
            total += mp[a];
    }
    cout << total << "\n";
    return 0;
}