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
        int a, b, k;
        cin >> a >> b >> k;
        if (a > b)
        {
            swap(a, b);
        }

        int x = __gcd(a, b);
        if (k == 1)
        {
            cout << x + a << "\n";
        }
        else
        {
            cout << 2 * x << "\n";
        }
    }
    return 0;
}