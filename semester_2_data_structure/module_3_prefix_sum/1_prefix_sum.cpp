#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<long long int> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            p[i] = v[i];
        else
            p[i] = v[i] + p[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int sum;
        if (l == 0)
            sum = p[r];
        else
            sum = p[r] - p[l - 1];
        cout << sum << endl;
    }
    return 0;
}