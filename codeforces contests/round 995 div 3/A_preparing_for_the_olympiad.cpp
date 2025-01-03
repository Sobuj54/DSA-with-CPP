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

        int mono = 0, stero = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                mono += a[i];
                break;
            }
            if (a[i] > b[i + 1])
            {
                mono += a[i];
                stero += b[i + 1];
            }
        }
        cout << mono - stero << "\n";
    }
    return 0;
}