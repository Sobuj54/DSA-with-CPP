#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        long long c;
        cin >> n >> c >> d;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        sort(a.rbegin(), a.rend());

        int l = 0, r = d + 1;
        while (l < r)
        {
            int m = l + (r - l + 1) / 2;
            long long tot = 0;

            for (int i = 0; i < d; i++)
            {
                if (i % m < n)
                    tot += a[i % m];
            }

            if (tot >= c)
            {
                l = m;
            }
            else
            {
                r = m - 1;
            }
        }

        if (l == d + 1)
        {
            cout << "Infinity\n";
        }
        else if (l == 0)
        {
            cout << "Impossible\n";
        }
        else
        {
            cout << l - 1 << '\n';
        }
    }

    return 0;
}
