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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= b[i])
            {
                if (ceil(1.0 * a[i] / b[i]) < 3)
                {
                    cnt++;
                }
            }
            else
            {
                if (ceil(1.0 * b[i] / a[i]) < 3)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}