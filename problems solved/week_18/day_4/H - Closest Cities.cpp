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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> left(n), right(n);
        for (int i = 0; i < n - 1; i++)
        {
            right[i + 1] = right[i];
            if (i == 0 || a[i] - a[i - 1] > a[i + 1] - a[i])
                right[i + 1]++;
            else
                right[i + 1] += a[i + 1] - a[i];
        }

        for (int i = n - 1; i > 0; i--)
        {
            left[i - 1] = left[i];
            if (i == n - 1 || a[i] - a[i - 1] < a[i + 1] - a[i])
                left[i - 1]++;
            else
                left[i - 1] += a[i] - a[i - 1];
        }

        int q;
        cin >> q;

        while (q--)
        {
            int s, e;
            cin >> s >> e;
            s--, e--;

            if (s < e)
                cout << right[e] - right[s] << endl;
            else
                cout << left[e] - left[s] << endl;
        }
    }

    return 0;
}