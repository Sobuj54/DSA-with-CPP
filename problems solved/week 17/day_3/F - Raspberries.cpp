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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int d = k - 1;
        int e_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                e_cnt++;

            if (arr[i] % k == 0)
                d = 0;
            else
                d = min(d, k - arr[i] % k);
        }

        if (k != 4)
        {
            cout << d << '\n';
        }
        else
        {
            if (e_cnt >= 2)
                cout << 0 << '\n';
            else if (e_cnt == 1)
                cout << min(d, 1) << '\n';
            else
                cout << min(2, d) << '\n';
        }
    }
    return 0;
}