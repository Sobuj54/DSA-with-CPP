#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    map<ll, ll> prefixSumCount;
    ll currentSum = 0;
    ll count = 0;

    prefixSumCount[0] = 1;

    for (ll i = 0; i < n; ++i)
    {
        currentSum += arr[i];

        if (prefixSumCount.find(currentSum - x) != prefixSumCount.end())
        {
            count += prefixSumCount[currentSum - x];
        }
        prefixSumCount[currentSum]++;
    }

    cout << count << "\n";
    return 0;
}