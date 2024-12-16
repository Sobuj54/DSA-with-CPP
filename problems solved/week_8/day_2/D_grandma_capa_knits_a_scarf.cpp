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
        string s;
        cin >> n >> s;
        int ans = n + 1;
        for (int c = 0; c < 26; c++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++, r--;
                }
                else if (s[l] == char('a' + c))
                {
                    cnt++, l++;
                }
                else if (s[r] == char('a' + c))
                {
                    cnt++, r--;
                }
                else
                {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == n + 1)
            ans = -1;
        cout << ans << '\n';
    }
    return 0;
}