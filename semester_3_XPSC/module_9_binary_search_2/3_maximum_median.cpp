#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    auto neededOperation = [&](ll mid)
    {
        ll res = 0;
        for (int i = n / 2; i < n; i++)
        {
            res += mid - a[i];
            if (res > k)
                return res;
        }
        return res;
    };

    ll l = 1, r = 1e18, median;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (neededOperation(mid) <= k)
        {
            median = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << median << "\n";
    return 0;
}