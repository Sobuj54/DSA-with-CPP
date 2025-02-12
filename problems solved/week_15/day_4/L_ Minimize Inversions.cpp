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
        int n;
        cin >> n;
        vector<pair<int, int> > v;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, 0});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            v[i].second = i;
        }

        sort(v.begin(), v.end());
        for (auto [x, y] : v)
            cout << x << " ";

        cout << endl;

        for (auto [x, y] : v)
            cout << b[y] << " ";

        cout << endl;
    }
    return 0;
}