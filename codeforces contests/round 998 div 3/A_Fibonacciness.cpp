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
        vector<int> a(5);
        cin >> a[0] >> a[1] >> a[3] >> a[4];
        vector<int> v(3);
        v[0] = a[0] + a[1];
        v[1] = a[3] - a[1];
        v[2] = a[4] - a[3];
        int total = 0;
        for (int i = 0; i < 3; i++)
        {
            a[2] = v[i];
            int cnt = 0;
            for (int i = 2; i < 5; i++)
            {
                if (a[i - 2] + a[i - 1] == a[i])
                {
                    cnt++;
                }
            }
            total = max(cnt, total);
        }
        cout << total << "\n";
    }
    return 0;
}