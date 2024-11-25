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
        int n, x, y;
        cin >> n >> x >> y;

        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a * x <= y)
            {
                total += a * x;
            }
            else
            {
                total += y;
            }
        }

        cout << total << "\n";
    }
    return 0;
}