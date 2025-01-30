#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll num;
    cin >> num;

    vector<ll> arr(num);
    for (ll i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    map<ll, ll> mp;
    for (ll i = 0; i < num - 1; i++)
    {
        for (ll j = i + 1; j < num; j++)
        {
            mp[arr[i] + arr[j]]++;
        }
    }

    ll ans = 0;
    for (const auto &pair : mp)
    {
        ans = max(ans, pair.second);
    }

    cout << ans << "\n";

    return 0;
}