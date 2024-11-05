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
        string s;
        cin >> s;

        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        int odd_count = 0;
        for (auto [x, y] : mp)
        {
            if (y % 2 != 0)
            {
                odd_count++;
            }
        }

        if (odd_count <= k + 1)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
    return 0;
}