#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, mid, midCr;
        cin >> n;

        ll l = 1, r = 2e9;
        while (r - l > 1)
        {
            mid = l + (r - l) / 2;
            midCr = (mid * (mid - 1)) / 2;
            if (midCr <= n)
                l = mid;
            else
                r = mid;
        }
        ll lCr = (l * (l - 1)) / 2;
        ll bal = n - lCr;
        cout << l + bal << endl;
    }

    return 0;
}