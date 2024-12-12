#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N = 1e6 + 5;
vector<int> a(N);

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (int j = 29; j >= 0; j--)
        {
            ll cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= (1 << j) && a[i] < (1 << (j + 1)))
                {
                    cnt++;
                }
            }
            ans += cnt * (cnt - 1) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}