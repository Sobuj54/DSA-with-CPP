#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0;
    int l = 0, minLength = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        while (sum >= s)
        {
            minLength = min(minLength, i - l + 1);
            sum -= a[l];
            l++;
        }
    }

    if (minLength == INT_MAX)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << minLength << '\n';
    }

    return 0;
}
