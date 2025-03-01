#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, vector<int> &b, int n)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0, i = 0;
    while (i < n - ans)
    {
        while (a[i] >= b[i + ans] && i + ans < n)
        {
            ++ans;
        }
        ++i;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);

        a[0] = 1;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        cout << solve(a, b, n) << "\n";
    }

    return 0;
}
