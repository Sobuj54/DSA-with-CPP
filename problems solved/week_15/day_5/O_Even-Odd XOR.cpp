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
        if (n % 4 == 0)
        {
            for (int i = 2; i <= n + 1; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else if (n % 4 == 1)
        {
            cout << 0 << " ";
            int cnt = 2;
            for (int i = 0; i < n - 1; i++)
            {
                cout << cnt << " ";
                cnt++;
            }
            cout << "\n";
        }
        else if (n % 4 == 3)
        {
            cout << 2 << " " << 1 << " " << 3 << " ";
            int cnt = 4;
            for (int i = 0; i < n - 3; i++)
            {
                cout << cnt << " ";
                cnt++;
            }
            cout << "\n";
        }
        else
        {
            cout << 2 << " " << 3 << " " << 1 << " " << 4 << " " << 12 << " " << 8 << " ";
            int cnt = 14;
            for (int i = 0; i < n - 6; i++)
            {
                cout << cnt << " ";
                cnt++;
            }
            cout << "\n";
        }
    }
    return 0;
}