#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    long long sum = 0, count = 0;

    while (r < n)
    {
        sum += a[r];

        while (sum >= s)
        {

            count += (n - r);
            sum -= a[l];
            l++;
        }

        r++;
    }

    cout << count << '\n';

    return 0;
}
