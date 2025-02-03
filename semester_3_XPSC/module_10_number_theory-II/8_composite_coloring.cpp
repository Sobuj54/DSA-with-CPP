#include <bits/stdc++.h>
using namespace std;
vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                if (a[i] % p[j] == 0)
                {
                    mp[p[j]].push_back(i);
                    break;
                }
            }
        }

        vector<int> ans(n);
        int color = 1;
        for (auto [x, y] : mp)
        {
            for (auto val : y)
            {
                ans[val] = color;
            }
            color++;
        }

        cout << mp.size() << "\n";
        for (auto x : ans)
            cout << x << " ";

        cout << "\n";
    }
    return 0;
}