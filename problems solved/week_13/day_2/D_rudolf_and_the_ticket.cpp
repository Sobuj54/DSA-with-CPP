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
        int ans = 0;
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        int x;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            for (int i = 0; i < n; i++)
            {
                if ((x + v1[i]) <= k)
                    ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}