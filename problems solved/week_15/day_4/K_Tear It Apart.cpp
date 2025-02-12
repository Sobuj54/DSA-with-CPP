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
        string s;
        cin >> s;
        int mx, mn = INT_MAX;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int cnt = 0;
            mx = 0;
            for (auto ch : s)
            {
                if (c != ch)
                {
                    cnt++;
                    mx = max(mx, cnt);
                }
                else
                    cnt = 0;
            }
            if (mx < mn)
            {
                mn = mx;
            }
        }

        if (mn == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            int cnt = 0;
            while (mn != 0)
            {
                mn /= 2;
                cnt++;
            }
            cout << cnt << "\n";
        }
    }
    return 0;
}