#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> p = {{2, 1}, {1, 1}, {1, 2}, {3, 0}, {2, 0}};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if (v.size() == 3)
        {
            cout << 0 << "\n";
            continue;
        }

        int mn = INT_MAX;
        for (auto [first, second] : p)
        {
            mn = min(v[n - first] - v[second], mn);
        }

        cout << mn << "\n";
    }
    return 0;
}