#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        a.resize(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        vector<long long> list = a;
        sort(list.begin(), list.end());

        long long max_val = list[n - 1];
        long long x = 0;

        for (long long i : list)
        {
            if (i == max_val)
                break;
            x = gcd(x, max_val - i);
        }

        long long operation = 1;
        for (long long i : list)
        {
            operation += (max_val - i) / x;
        }

        long long last_value = max_val - x;
        for (int i = n - 2; i >= 0; --i)
        {
            if (last_value != list[i])
                break;
            last_value -= x;
            ++operation;
        }

        cout << operation << endl;
    }

    return 0;
}
