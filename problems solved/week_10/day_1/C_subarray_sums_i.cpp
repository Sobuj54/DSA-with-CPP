#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, ll> prefixMap;
    ll currentSum = 0;
    ll count = 0;

    prefixMap[0] = 1;

    for (ll i = 0; i < n; i++)
    {
        currentSum += a[i];
        if (prefixMap.find(currentSum - x) != prefixMap.end())
        {
            count += prefixMap[currentSum - x];
        }
        prefixMap[currentSum]++;
    }

    cout << count << endl;

    return 0;
}