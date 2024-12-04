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
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n), s(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            s[i] = a[i] * b[i];
        }

        sort(s.begin(), s.end(), greater<int>());
        int sum = 0, coins = -1;
        for (int i = 0; i < n; i++)
        {
            if (sum >= x)
            {
                break;
            }
            sum += s[i];
            coins = i + 1;
        }

        if (sum >= x)
        {
            cout << coins << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}