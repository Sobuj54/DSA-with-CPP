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
        vector<pair<int, bool>> v(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = {x, false};
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                s.insert(v[i].first);
            }
            else if (s.find(v[i].first) == s.end() && v[i + 1].second == false)
            {
                s.insert(v[i].first);
            }
            else
            {
                v[i].second = true;
            }
        }

        int count = 0;
        for (auto [x, y] : v)
        {
            if (y)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}