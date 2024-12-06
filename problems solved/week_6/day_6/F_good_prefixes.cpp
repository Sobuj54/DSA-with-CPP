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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long sum = 0;
        int mx = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            mx = max(mx, v[i]);
            if (sum - mx == mx)
            {
                res++;
            }
        }
        cout << res << "\n";
    }
    return 0;
}