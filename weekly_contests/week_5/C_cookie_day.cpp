#include <bits/stdc++.h>
#define ll long long
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

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (k <= a)
            {
                int rem = a % k;
                mn = min(mn, rem);
            }
        }
        cout << (mn == INT_MAX ? -1 : mn) << "\n";
    }
    return 0;
}