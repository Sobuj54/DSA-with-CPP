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
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        vector<int> t(k);
        for (int i = 0; i < k; i++)
        {
            cin >> t[i];
        }
        vector<long long> c(n, INT_MAX);
        for (int i = 0; i < k; i++)
        {
            c[a[i] - 1] = t[i];
        }

        long long p;
        vector<long long> L(n, INT_MAX);
        p = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            p = min(p + 1, c[i]);
            L[i] = p;
        }

        vector<long long> R(n, INT_MAX);
        p = INT_MAX;
        for (int i = n - 1; i >= 0; i--)
        {
            p = min(p + 1, c[i]);
            R[i] = p;
        }

        for (int i = 0; i < n; i++)
        {
            cout << min(L[i], R[i]) << " ";
        }
        cout << "\n";
    }

    return 0;
}
