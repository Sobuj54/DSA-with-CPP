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
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int m, lan;
            cin >> m >> lan;
            if (lan == l)
                v.push_back(m);
        }

        if (v.size() == 0)
        {
            cout << -1 << "\n";
        }
        else if (v.size() < k)
        {
            cout << -1 << "\n";
        }
        else
        {
            int total = 0;
            sort(v.rbegin(), v.rend());
            for (int i = 0; i < k; i++)
            {
                total += v[i];
            }
            cout << total << "\n";
        }
    }
    return 0;
}