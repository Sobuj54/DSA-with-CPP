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
        int n, totalXOR = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
            totalXOR ^= x;
        }

        int minXOR = totalXOR;
        for (int i = 0; i < n; i++)
        {
            minXOR = min(minXOR, totalXOR ^ a[i]);
        }
        cout << minXOR << "\n";
    }

    return 0;
}