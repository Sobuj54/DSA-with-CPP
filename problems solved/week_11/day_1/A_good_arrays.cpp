#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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

        ll sum_a = 0, cnt_1 = 0;
        for (int x : a)
        {
            sum_a += x;
            if (x == 1)
                cnt_1++;
        }

        if (sum_a >= cnt_1 + n && n > 1)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}