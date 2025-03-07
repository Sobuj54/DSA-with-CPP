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
        long long n;
        cin >> n;
        long long a[n + 10][2];
        for (int i = 0; i <= n + 3; i++)
        {
            a[i][0] = 0;
            a[i][1] = 0;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        for (int i = 0; i <= n; i++)
        {
            if (a[i][0] && a[i][1])
                ans += (n - 2);
            if (a[i][0] && a[i + 2][0] && a[i + 1][1])
                ans++;
            if (a[i][1] && a[i + 2][1] && a[i + 1][0])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}