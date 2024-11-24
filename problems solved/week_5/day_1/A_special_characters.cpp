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
        if (n % 2 == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            for (int i = 0; i < n / 2; ++i)
                for (int j = 0; j < 2; ++j)
                    cout << "AB"[i & 1];
            cout << '\n';
        }
    }
    return 0;
}