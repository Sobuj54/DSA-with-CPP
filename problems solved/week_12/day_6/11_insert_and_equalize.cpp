#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % a);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n);
        for (long long i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long gc = 0;
        for (long long i = 1; i < n; ++i)
        {
            gc = gcd(gc, v[i] - v[0]);
        }

        long long take = v[n - 1];
        long long l = 0;

        if (gc != 0)
        {
            for (long long i = 0; i < n; ++i)
            {
                l += (take - v[i]) / gc;
            }

            for (long long i = 1; i <= n; ++i)
            {
                long long m = take - gc * i;
                if (!binary_search(v.begin(), v.end(), m))
                {
                    l += i;
                    break;
                }
            }
        }

        if (gc == 0 || n == 1)
        {
            cout << n << endl;
        }
        else
        {
            cout << l << endl;
        }
    }

    return 0;
}
