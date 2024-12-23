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
        int ans = 1, cur = 1;
        while (true)
        {
            if (cur >= n)
            {
                cout << ans << '\n';
                break;
            }
            ans++;
            cur = cur * 2 + 2;
        }
    }
    return 0;
}