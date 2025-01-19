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
        vector<pair<int, int>> a;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                a.emplace_back(x, i);
            }
        }

        sort(a.begin(), a.end());
        vector<int> sequence(n);
        for (int i = 0; i < n; i++)
        {
            sequence[i] = a[i].second;
        }

        bool exists = true;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i].second != sequence[i % n])
            {
                exists = false;
                break;
            }
        }

        if (exists)
        {
            for (int i = 0; i < n; i++)
                cout << a[i].second << " ";
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}