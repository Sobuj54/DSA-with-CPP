#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    map<ll, ll> freq;
    ll start = 0, count = 0, distinct = 0;

    for (ll i = 0; i < n; ++i)
    {
        if (freq[arr[i]] == 0)
        {
            distinct++;
        }

        freq[arr[i]]++;
        while (distinct > k)
        {
            freq[arr[start]]--;
            if (freq[arr[start]] == 0)
            {
                distinct--;
            }
            start++;
        }
        count += (i - start + 1);
    }

    cout << count << "\n";

    return 0;
}