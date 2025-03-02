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
        int n, k;
        cin >> n >> k;
        vector<int> ans(n, 0);
        map<int, vector<int> > indices;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (indices[x].size() < k)
            {
                indices[x].push_back(i);
            }
        }

        int m = 0;
        for (const auto &e : indices)
        {
            m += e.second.size();
        }
        m -= m % k;

        int color = 0;
        bool done = false;
        for (const auto &e : indices)
        {
            for (int i : e.second)
            {
                ans[i] = ++color;
                color %= k;
                if (--m == 0)
                {
                    done = true;
                    break;
                }
            }
            if (done)
                break;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
