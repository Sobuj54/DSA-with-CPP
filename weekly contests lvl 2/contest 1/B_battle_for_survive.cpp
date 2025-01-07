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
            if (i < n - 2)
            {
                sum += a[i];
            }
        }

        long long minVal = a[n - 2] - sum;
        cout << (a[n - 1] - minVal) << "\n";
    }
    return 0;
}