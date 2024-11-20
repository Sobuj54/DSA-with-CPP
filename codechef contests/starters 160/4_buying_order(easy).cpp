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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int mx = 0;
        if ((b[n - 1] == 0 || b[n - 1] == 1) && b[0] == 1)
        {
            mx = 2 * n - 1;
        }
        else if (b[n - 1] == 0)
        {
            mx = 2 * n - 1;
        }
        else
        {
            mx = 2 * n - 2;
        }

        cout << mx << "\n";
    }
    return 0;
}