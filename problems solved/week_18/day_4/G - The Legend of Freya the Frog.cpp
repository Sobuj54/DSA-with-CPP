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
        int x, y, k;
        cin >> x >> y >> k;
        int ans = 0;
        ans += 2 * max((x + k - 1) / k, (y + k - 1) / k);
        if ((x + k - 1) / k > (y + k - 1) / k)
        {
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}