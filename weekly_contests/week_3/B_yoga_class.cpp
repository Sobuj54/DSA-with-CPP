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
        int n, x, y;
        cin >> n >> x >> y;

        if (x * 2 >= y)
        {
            cout << n * x << "\n";
        }
        else
        {
            int total = 0;
            int res = n / 2;
            total += res * y;
            if (n % 2 != 0)
            {
                total += x;
            }
            cout << total << "\n";
        }
    }
    return 0;
}