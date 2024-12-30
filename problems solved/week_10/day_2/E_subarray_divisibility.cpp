#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    map<ll, ll> remainderCount;
    ll currentSum = 0;
    ll count = 0;

    remainderCount[0] = 1;

    for (ll i = 0; i < n; ++i)
    {
        currentSum += arr[i];
        ll remainder = currentSum % n;

        if (remainder < 0)
        {
            remainder += n;
        }
        if (remainderCount.find(remainder) != remainderCount.end())
        {
            count += remainderCount[remainder];
        }
        remainderCount[remainder]++;
    }

    cout << count << "\n";
    return 0;
}