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
        int n, m, k;
        cin >> n >> m >> k;
        long long jsum = 0, x, jmn = INT_MAX, gmn = INT_MAX, jmx = 0, gmx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            jsum += x;
            jmn = min(jmn, x);
            jmx = max(jmx, x);
        }

        for (int i = 0; i < m; i++)
        {
            cin >> x;
            gmn = min(gmn, x);
            gmx = max(gmx, x);
        }

        long long ans = jsum;
        if (gmx > jmn)
        {
            ans = jsum - jmn + gmx;
        }
        if (k >= 2 && k % 2 == 0)
        {
            ans = ans - max(jmx, gmx) + min(jmn, gmn);
        }

        cout << ans << "\n";
    }

    return 0;
}