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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long result = 0;
        long long x = 0;

        for (int temp : a)
        {
            x += temp;
            result += abs(x);
        }

        cout << result << "\n";
    }
    return 0;
}