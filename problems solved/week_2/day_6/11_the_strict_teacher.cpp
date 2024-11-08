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
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        for (int i = 1; i <= q; i++)
        {
            int b;
            cin >> b;
            int k = upper_bound(v.begin(), v.end(), b) - v.begin();

            if (k == 0)
                cout << v[0] - 1 << '\n';
            else if (k == m)
                cout << n - v[m - 1] << '\n';
            else
                cout << (v[k] - v[k - 1]) / 2 << '\n';
        }
    }
}