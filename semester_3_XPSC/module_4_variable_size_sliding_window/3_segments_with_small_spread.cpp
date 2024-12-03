#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k, segments = 0;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    multiset<ll> m;
    int l = 0, r = 0;
    while (r < n)
    {
        m.insert(v[r]);
        auto mn = m.begin();
        auto mx = m.rbegin();
        if (*mx - *mn <= k)
        {
            segments += r - l + 1;
        }
        else
        {
            while (*mx - *mn > k && l < r)
            {
                m.erase(m.find(v[l]));
                l++;
                mn = m.begin(), mx = m.rbegin();
            }
            if (*mx - *mn <= k)
            {
                segments += r - l + 1;
            }
        }
        r++;
    }

    cout << segments << "\n";
    return 0;
}