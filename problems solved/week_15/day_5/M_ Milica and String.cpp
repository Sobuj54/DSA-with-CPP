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
        int cnt = 0;
        for (auto c : s)
            if (c == 'B')
                cnt++;

        if (cnt == k)
        {
            cout << 0 << "\n";
            continue;
        }
        if (cnt > k)
        {
            int diff = cnt - k;
            int idx;
            for (int i = 0; i < n; i++)
            {
                if (diff == 0)
                    break;
                idx = i + 1;
                if (s[i] == 'B')
                    diff--;
            }
            cout << 1 << "\n";
            cout << idx << " " << 'A' << "\n";
        }
        else
        {
            int diff = k - cnt;
            int idx;
            for (int i = 0; i < n; i++)
            {
                if (diff == 0)
                    break;
                idx = i + 1;
                if (s[i] == 'A')
                    diff--;
            }
            cout << 1 << "\n";
            cout << idx << " " << 'B' << "\n";
        }
    }
    return 0;
}