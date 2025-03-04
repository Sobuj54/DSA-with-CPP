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
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i < n; i++)
        {
            ans += (s[i] == '@');
            if (s[i] == '*' && s[i - 1] == '*')
                break;
        }
        cout << ans << "\n";
    }
    return 0;
}