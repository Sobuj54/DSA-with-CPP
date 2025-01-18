#include <bits/stdc++.h>
using namespace std;

vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

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
        vector<long long> v(n);
        vector<int> rem(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        for (auto x : prime)
        {
            bool ok = false;
            for (int i = 0; i < n; i++)
            {
                if (rem[i] == 0 && v[i] % x == 0)
                {
                    if (!ok)
                    {
                        ok = true;
                        ++cnt;
                    }
                    rem[i] = cnt;
                }
            }
        }
        cout << cnt << endl;
        for (auto x : rem)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}