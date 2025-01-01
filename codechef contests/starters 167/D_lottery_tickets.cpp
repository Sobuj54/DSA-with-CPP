#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int x = a[0];
        sort(a.begin(), a.end());
        long long result = 0;

        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] == x)
            {
                long long l, r;

                if (i == 0)
                {
                    l = 1;
                }
                else
                {
                    l = (a[i - 1] + a[i]) / 2 + 1;
                }

                if (i == a.size() - 1)
                {
                    r = 1000000;
                }
                else
                {
                    r = (a[i] + a[i + 1]) / 2;
                }

                result += (r - l + 1);
            }
        }

        cout << result << "\n";
    }
    return 0;
}
