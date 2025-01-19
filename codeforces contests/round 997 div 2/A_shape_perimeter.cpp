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
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a[i] = {x, y};
        }

        int totalPerimeter = n * 4 * m;
        for (int i = 1; i < n; i++)
        {
            auto [x, y] = a[i];
            int l = m - x;
            int w = m - y;
            totalPerimeter -= 2 * (l + w);
        }
        cout << totalPerimeter << "\n";
    }
    return 0;
}