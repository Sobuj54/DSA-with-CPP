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
        long long n, k;
        cin >> n >> k;
        long long total = n * (n + 1) / 2;
        long long first = n - k;
        long long firstTotal = first * (first + 1) / 2;
        long long sum = total - firstTotal;
        if (sum % 2 == 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}