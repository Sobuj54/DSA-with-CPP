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

        int l = 0, r = 0, wCount = 0, mn = INT_MAX;
        while (r < s.size())
        {
            if (s[r] == 'W')
                wCount++;
            if (r - l + 1 == k)
            {
                mn = min(wCount, mn);
                if (s[l] == 'W')
                    wCount--;
                l++;
            }
            r++;
        }
        cout << mn << "\n";
    }
    return 0;
}