#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, c, q;
        cin >> n >> c >> q;
        string s;
        cin >> s;

        vector<pair<ll, ll>> ops(c);
        vector<pair<ll, ll>> segs(c);

        ll curr_len = n;

        for (int i = 0; i < c; i++)
        {
            ll l, r;
            cin >> l >> r;
            ops[i] = {l, r};
            segs[i] = {curr_len + 1, curr_len + (r - l + 1)};
            curr_len = segs[i].second;
        }

        while (q--)
        {
            ll k;
            cin >> k;
            if (k <= n)
            {
                cout << s[k - 1] << endl;
                continue;
            }
            for (int i = c - 1; i >= 0; i--)
            {
                if (k >= segs[i].first and k <= segs[i].second)
                {
                    k = (ops[i].first) + (k - segs[i].first);
                }
            }
            cout << s[k - 1] << endl;
        }
    }
    return 0;
}