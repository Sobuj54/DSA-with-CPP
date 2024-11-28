#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k, sum = 0;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = 0, len = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            len = max(len, r - l + 1);
        }
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << len << "\n";
    return 0;
}