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
        vector<int> a;
        int odd = 0, even = 0;
        bool one = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
            {
                odd++;
                a.push_back(x);
            }
        }

        sort(a.begin(), a.end());
        if (!even)
        {
            int p = 0, sum = 0;
            for (int i = 0; i < a.size(); i++)
            {
                sum += a[i];
                if (sum % 2 == 0)
                {
                    p++;
                    while (sum % 2 == 0)
                    {
                        sum /= 2;
                    }
                }
            }
            cout << p << "\n";
        }
        else
        {
            cout << 1 + odd << "\n";
        }
    }
    return 0;
}