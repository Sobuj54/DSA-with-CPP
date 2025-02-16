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
        map<int, vector<int> > mp;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            mp[x].push_back(y);
            mp[y].push_back(x);
        }

        int x, y;
        for (auto [z, arr] : mp)
        {
            if (arr.size() == 1)
            {
                int parent = arr[0];
                y = mp[parent].size() - 1;
                for (auto val : mp[parent])
                {
                    if (mp[val].size() > 1)
                    {
                        x = mp[val].size();
                        break;
                    }
                }
                break;
            }
        }
        cout << x << " " << y << "\n";
    }
    return 0;
}