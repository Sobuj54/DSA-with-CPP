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
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());

        if (n < 3)
        {
            cout << "-1\n";
        }
        else
        {
            long long req = 2LL * a[n / 2] * n;
            cout << max(0LL, req + 1 - sum) << '\n';
        }
    }

    return 0;
}
