#include <bits/stdc++.h>
using namespace std;

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
        string s;
        cin >> s;
        vector<long long> v;
        long long cur = 0;

        for (long long p = n - 1; p >= 0; p--)
        {
            if (s[p] == '1')
            {
                ++cur;
            }
            else
            {
                v.push_back(cur);
            }
        }

        for (long long p = 1; p < v.size(); p++)
        {
            v[p] += v[p - 1];
        }

        for (long long p = 0; p < n; p++)
        {
            cout << (p < v.size() ? v[p] : -1) << " ";
        }
        cout << "\n";
    }

    return 0;
}
