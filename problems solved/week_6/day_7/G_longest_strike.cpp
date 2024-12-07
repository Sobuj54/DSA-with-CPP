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
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        vector<int> c;
        for (auto x : mp)
        {
            if (x.second >= k)
            {
                c.push_back(x.first);
            }
        }

        if (c.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(c.begin(), c.end());
            int mx = 0, left = c[0], right = c[0], l = c[0];
            for (int i = 1; i < c.size(); i++)
            {
                if (c[i] - 1 == c[i - 1])
                {
                    if (c[i] - l > mx)
                    {
                        left = l;
                        right = c[i];
                        mx = c[i] - l;
                    }
                }
                else
                {
                    l = c[i];
                }
            }
            cout << left << " " << right << endl;
        }
    }
    return 0;
}