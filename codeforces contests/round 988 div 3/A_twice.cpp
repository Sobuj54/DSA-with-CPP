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
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }

        int op = 0;
        for (auto [x, y] : mp)
        {
            if (y > 1)
            {
                op += y / 2;
            }
        }
        cout << op << "\n";
    }
    return 0;
}