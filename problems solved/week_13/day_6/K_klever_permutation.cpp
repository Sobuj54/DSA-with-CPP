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
        int n, k;
        cin >> n >> k;

        vector<int> v(n, 0);
        int a = 1, b = n;

        for (int p = 0; p < k; ++p)
        {
            for (int q = p; q < n; q += k)
            {
                if (p % 2 == 1)
                {
                    v[q] = b--;
                }
                else
                {
                    v[q] = a++;
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
