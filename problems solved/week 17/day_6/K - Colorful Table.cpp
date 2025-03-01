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
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1), l(k + 1, n + 1), r(k + 1, -1);
        set<int> se;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            l[a[i]] = min(l[a[i]], i);
            r[a[i]] = i;
            se.insert(a[i]);
        }

        for (int i = k - 1; i >= 1; i--)
        {
            l[i] = min(l[i], l[i + 1]);
            r[i] = max(r[i], r[i + 1]);
        }

        for (int i = 1; i <= k; i++)
        {
            if (!se.count(i))
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 2 * (r[i] - l[i] + 1) << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
