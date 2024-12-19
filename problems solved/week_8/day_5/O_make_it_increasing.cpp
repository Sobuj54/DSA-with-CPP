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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;
        bool flag = false;
        for (int i = n - 2; i >= 0; i--)
        {
            while (a[i] >= a[i + 1] && a[i] > 0)
            {
                a[i] /= 2;
                ans++;
            }
            if (a[i] == a[i + 1])
            {
                cout << -1 << '\n';
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << ans << '\n';
    }
    return 0;
}