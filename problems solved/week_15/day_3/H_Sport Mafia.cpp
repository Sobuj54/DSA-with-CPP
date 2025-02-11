#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int l = 1, r = n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll sum = mid * (mid + 1) / 2;
        ll res = sum - (n - mid);
        if (res == k)
        {
            cout << (n - mid) << "\n";
            break;
        }
        else if (res < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return 0;
}