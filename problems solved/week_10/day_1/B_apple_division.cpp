#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> weights(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    ll totalWeight = 0;
    for (ll w : weights)
    {
        totalWeight += w;
    }

    ll minDifference = totalWeight;

    ll subsets = 1 << n;
    for (ll mask = 0; mask < subsets; mask++)
    {
        ll groupSum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                groupSum += weights[i];
            }
        }
        ll difference = abs(totalWeight - 2 * groupSum);
        minDifference = min(minDifference, difference);
    }

    cout << minDifference << endl;

    return 0;
}